#include "nth_desc.h"
#include "nth_support.h"

/* init functions */
void nth_desc_dlist_init ( nth_desc_dlist_t *l )
{
      l->nths = 0;
      l->first = NULL;
      l->last = NULL;
}

void nth_desc_edlist_init ( nth_desc_edlist_t *l )
{
      l->first = NULL;
      l->last = NULL;
      l->nths = 0;
      nth_spin_init(&l->mutex);
}

void nth_desc_eslist_init ( nth_desc_eslist_t *l)
{
	l->first = NULL;
	l->last = NULL;
	l->nths = 0;
	nth_spin_init(&l->mutex);
}

/* push functions */

void nth_desc_eslist_push_back ( nth_desc_eslist_t *l, nth_desc_t *node )
{
  assert(node);
  node->next = NULL;
  nth_spin_lock(&(l->mutex));
  if (!l->first)
    l->first = node;
  if (l->last)
    l->last->next = node;
  l->last = node;
  l->nths++;
  node->myqueue = l;
  nth_spin_unlock(&(l->mutex));
}

void nth_desc_dlist_push_back ( nth_desc_dlist_t *l, nth_desc_t *node )
{

  if (l->last)
    l->last->next = node;
  if (!l->first)
    l->first = node;
  node->prev = l->last;
  node->next = NULL;
  l->last = node;
  l->nths++;
}

void nth_desc_dlist_push_front ( nth_desc_dlist_t *l, nth_desc_t *node  )
{
  if (l->first)
    l->first->prev = node;
  if (!l->last)
    l->last = node;

  node->next = l->first;
  node->prev = NULL;
  l->first = node;
  l->nths++;
}

void nth_desc_edlist_push_back ( nth_desc_edlist_t *l, nth_desc_t *node )
{
  assert(node);
  node->next = NULL;
  nth_spin_lock(&(l->mutex));
  if (l->last)
    l->last->next = node;
  if (!l->first)
    l->first = node;

  node->prev = l->last;
  l->last = node;
  l->nths++;
  node->myqueue = l;
  nth_spin_unlock(&(l->mutex));
}

void nth_desc_edlist_push_front ( nth_desc_edlist_t *l, nth_desc_t *node  )
{
  assert(node);
  node->prev = NULL;
  nth_spin_lock(&(l->mutex));
  if (l->first)
    l->first->prev = node;
  if (!l->last)
    l->last = node;

  node->next = l->first;
  l->first = node;
  l->nths++;
  node->myqueue = l;
  nth_spin_unlock(&(l->mutex));
}

/* pop functions */

nth_desc_t * nth_desc_eslist_pop_front ( nth_desc_eslist_t *l )
{
	nth_desc_t *nth=0;

	if ( l->first ) {
		nth_spin_lock(&l->mutex);		
		nth = l->first;
		if ( nth ) {
		   l->first = nth->next;

  		   if (l->last == nth)
			l->last = NULL;
  		  nth->next =  NULL;
  		  nth->myqueue = NULL;
  		  l->nths--;
		}
		nth_spin_unlock(&l->mutex);
	}
	return nth;
}


//printf("[%d] removing %p from %p\n",NTH_KTH,node,l);

#define node_remove(l,node)\
{\
   if (l->first == node)\
    l->first = node->next;\
  else\
    node->prev->next = node->next;\
  if (l->last == node)\
    l->last = node->prev;\
  else\
    node->next->prev = node->prev;\
  node->next = node->prev = NULL;\
  node->myqueue = NULL;\
  l->nths--;\
}

nth_desc_t * nth_desc_dlist_pop_front ( nth_desc_dlist_t *l )
{
	nth_desc_t *nth;

	nth = l->first;
	if ( nth ) {
		node_remove(l,nth);
	}
	return nth;
}

nth_desc_t * nth_desc_dlist_pop_back ( nth_desc_dlist_t *l )
{
	nth_desc_t *nth;

	nth = l->last;
	if ( nth ) {
		node_remove(l,nth);
	}
	return nth;
}


nth_desc_t * nth_desc_edlist_pop_front ( nth_desc_edlist_t *l )
{
	nth_desc_t *nth=0;

	if ( l->first ) {
		nth_spin_lock(&l->mutex);		
		nth = l->first;
		if ( nth ) {
			node_remove(l,nth);
		}
		nth_spin_unlock(&l->mutex);
	}
	return nth;
}

nth_desc_t * nth_desc_edlist_pop_back ( nth_desc_edlist_t *l )
{
	nth_desc_t *nth=0;

	if ( l->last ) {
		nth_spin_lock(&l->mutex);
		nth = l->last;
		if ( nth ) {
			node_remove(l,nth);
		}
		nth_spin_unlock(&l->mutex);
	}
	return nth;
}


/* custom functions */

nth_desc_t * nth_desc_edlist_remove ( nth_desc_t *node, nth_desc_edlist_t *wh )
{
	volatile nth_desc_edlist_t *l;

	if ( !(l=node->myqueue) ) return NULL;

	if ( wh && l != wh ) return NULL;

	nth_assert(l,"null my queue");
	nth_spin_lock(&l->mutex);
	if ( node->myqueue == l && (!wh || l == wh)) {
		nth_assert(l==node->myqueue,"l=%p myqueue=%p",l,node->myqueue);
		node_remove(l,node);
	} else node = NULL;
	nth_spin_unlock(&l->mutex);

	return node;
}

nth_desc_t* nth_desc_edlist_get_front (nth_desc_edlist_t *l, int state,
		nth_desc_t *from )
{
	int vp = from->vp;
	nth_player_t *player = from->player;
	nth_desc_t *rv=NULL;

	if (l->first){
		nth_spin_lock(&l->mutex);
		rv = l->first;
		while (rv){
			if ( rv->state == state )
// To be included in next revision
//			&& (!rv->player || rv->player->team == team )
				if ( !rv->tied || rv->vp == vp )
						break;
				
			rv = rv->next;
		}
		if (rv){
			node_remove(l,rv);
		}		
		nth_spin_unlock(&l->mutex);
	}

	return rv;
}

nth_desc_t* nth_desc_edlist_get_back (nth_desc_edlist_t *l, int state,
		nth_desc_t *from)
{
	int vp = from->vp;
	nth_player_t *player = from->player;
	nth_desc_t *rv=NULL;

	if (l->last){
		nth_spin_lock(&l->mutex);
		rv = l->last;
		while (rv){
			if ( rv->state == state )
		//	&& (!rv->player || rv->player->team == team ) )
				if ( !rv->tied || rv->vp == vp )
					break;
				
			rv = rv->prev;
		}
		if (rv){
			node_remove(l,rv);
		}		
		nth_spin_unlock(&l->mutex);
	}

	return rv;
}

