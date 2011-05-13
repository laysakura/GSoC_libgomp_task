#include <stdlib.h>
#include <stdio.h>
#include "nth_alloc.h"
#include "nth_config.h"

void * nth_alloc (int size, nth_affinity_t affinity )
{
	void *rv = malloc(size);
	if (rv == NULL){
		perror("malloc");
		fprintf(stderr,
			"%s %d (nth_malloc): "
			"Memory allocation failed.\n",
			 __FILE__, __LINE__
		);
		fprintf(stderr,
			"\t trying to allocate 0x%x bytes.\n",
			(int) size
		);
		exit(NTH_STACK_ERROR); 
	}

	return rv;
}

void nth_free (void * ptr)
{
	// assert
	if (ptr)
		free(ptr);
}
