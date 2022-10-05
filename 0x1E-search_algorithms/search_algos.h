#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int low, int high);
int rec_bsearch(int *array, int low, int high, int value);

#endif /* __SEARCH_ALGOS_H__ */
