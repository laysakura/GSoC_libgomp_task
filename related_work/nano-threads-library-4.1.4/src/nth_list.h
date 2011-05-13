#ifndef NTH_LIST_H
#define NTH_LIST_H

struct nth_desc_t;
struct nth_player_t;

typedef struct {
	struct nth_desc_t *first;
	struct nth_desc_t *last;
	nth_word_t nths;	
} nth_desc_dlist_t;

typedef struct {
	struct nth_desc_t *first;
	struct nth_desc_t *last;
	nth_word_t nths;
	nth_spin_t mutex;
} nth_desc_edlist_t;

typedef struct {
	struct nth_desc_t *first;
	struct nth_desc_t *last;
	nth_word_t nths;
	nth_spin_t mutex;
} nth_desc_eslist_t;

// backward compatibility
typedef nth_desc_edlist_t nth_desc_q_t;

void nth_desc_eslist_init ( nth_desc_eslist_t *l );
void nth_desc_eslist_push_front ( nth_desc_eslist_t *l, struct nth_desc_t *node  );
void nth_desc_eslist_push_back ( nth_desc_eslist_t *l, struct nth_desc_t *node  );
struct nth_desc_t* nth_desc_eslist_pop_front ( nth_desc_eslist_t *l);
struct nth_desc_t* nth_desc_eslist_pop_back ( nth_desc_eslist_t *l);

void nth_desc_dlist_init ( nth_desc_dlist_t *l );
void nth_desc_dlist_push_front ( nth_desc_dlist_t *l, struct nth_desc_t *node  );
void nth_desc_dlist_push_back ( nth_desc_dlist_t *l, struct nth_desc_t *node  );
struct nth_desc_t* nth_desc_dlist_pop_front ( nth_desc_dlist_t *l);
struct nth_desc_t* nth_desc_dlist_pop_back ( nth_desc_dlist_t *l);
struct nth_desc_t* nth_desc_dlist_remove ( struct nth_desc_t *node);

void nth_desc_edlist_init ( nth_desc_edlist_t *l );
void nth_desc_edlist_push_front ( nth_desc_edlist_t *l, struct nth_desc_t *node  );
void nth_desc_edlist_push_back ( nth_desc_edlist_t *l, struct nth_desc_t *node  );
struct nth_desc_t* nth_desc_edlist_pop_front ( nth_desc_edlist_t *l);
struct nth_desc_t* nth_desc_edlist_pop_back ( nth_desc_edlist_t *l);
struct nth_desc_t* nth_desc_edlist_remove ( struct nth_desc_t *node, 			nth_desc_edlist_t *l);

struct nth_desc_t* nth_desc_edlist_get_front (nth_desc_edlist_t *l,
			int state, struct nth_desc_t *from);

struct nth_desc_t* nth_desc_edlist_get_back (nth_desc_edlist_t *l,
			int state, struct nth_desc_t *from);



#endif
