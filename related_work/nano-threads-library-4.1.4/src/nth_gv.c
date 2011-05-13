#include "nth_desc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *prefix="gv";
int gv_output = 0;
int gv_trace_immediate=1;
int gv_max_level = 100;

char *gv_colors[] = {
	"red",
	"blue",
	"green",
	"yellow",
	"orange",
	"magenta",
	"gray",
	"pink",
	"cyan",
	"gold",
	"hotpink",
	"limegreen",
	"seagreen",
	"orchid",
	"brown",
	"navy"
};

void gv_task_create (nth_desc_t *parent, nth_desc_t *newtask)
{
	if (!gv_output) return;

	if ( parent->deep_level > gv_max_level ) return;

	if ( parent->deep_level == gv_max_level ) {
		if ( parent->real_level == parent->deep_level)
			printf("%s task%u_%u -> \"...\" [color=%s]\n", prefix,
			parent->id,parent->deep_level,
			gv_colors[parent->vp]);
		else
			printf("%s task%u_%u__ -> \"...\"[color=%s]\n", prefix,
			parent->id,parent->real_level+1,
			gv_colors[parent->vp]);
		return;
	}

	if ( parent->real_level == parent->deep_level )
		printf("%s task%u_%u -> task%u_%u [color=%s]\n", prefix,
			parent->id,parent->deep_level,
			newtask->id,newtask->deep_level,
			gv_colors[parent->vp]);
	else
		printf("%s task%u_%u__ -> task%u_%u [color=%s]\n", prefix,
			parent->id,parent->real_level+1,
			newtask->id,newtask->deep_level,
			gv_colors[parent->vp]);

}

void gv_wf_schedule (nth_desc_t *parent, nth_desc_t *newtask)
{
	if (!gv_output) return;
	if ( parent->deep_level >= gv_max_level ) return;

	printf("%s task%u_%u [style=filled,fillcolor=%s]\n",
		prefix,newtask->id,
		newtask->deep_level,gv_colors[parent->vp]);
}

void gv_task_immediate ( nth_desc_t *myself )
{
	if (!gv_output || !gv_trace_immediate) return;
	if ( myself->deep_level > gv_max_level ) return;

	if ( myself->deep_level == gv_max_level ) {
		if ( myself->deep_level-1 == myself->real_level )
		printf("%s task%u_%u -> \"___\" [color=%s]\n", prefix,
		myself->id,myself->real_level,
		gv_colors[myself->vp]);
		return;
	}

	if ( myself->deep_level-1 == myself->real_level )
	printf("%s task%u_%u -> task%u_%u__ [color=%s]\n", prefix,
		myself->id,myself->real_level,
		myself->id,myself->deep_level,gv_colors[myself->vp]);
}

void gv_init ()
{
	char *options = getenv("NTH_GV");

	if (options) {
		char *opt,*next,*value;

		gv_output=1;

		next = options;
		while (next) {
			opt = next;
			next = strchr(opt,',');
			if (next) *next++=0;

			value = strchr(opt,'=');
			if ( value ) *value++=0;
			
			if ( !strcasecmp(opt,"noimm") ) {
				gv_trace_immediate = 0;
			}

			if ( !strcasecmp(opt,"maxlevel") ) {
				gv_max_level = atoi(value);
			}
		}
	}
	
	if ( gv_output ) {
		printf("GraphViz output on (noimm=%s)\n",gv_trace_immediate ? "yes" : "no");
		printf("%s digraph {\n",prefix);
	}

}

void gv_fini ()
{
        if ( gv_output ) printf("%s }\n",prefix);
}
