#include <malloc.h>

#ifndef SORT_SORT_UTILS_H
#define SORT_SORT_UTILS_H

int cmpInt(const void *a, const void *b);

int cmpString(const void *a, const void *b);

void swap(void *a, void *b, size_t size);

#endif