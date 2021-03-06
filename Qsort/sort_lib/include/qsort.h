#include <stdlib.h>
#include <stdio.h>
#include <crtdefs.h>

#ifndef SORT_QSORT_H
#define SORT_QSORT_H

typedef enum Pivot {
    FIRST, LAST, RANDOM, MEDIAN
} pivot_t;

pivot_t qsortPivot;


void qsort_l(void *array, size_t sizeOfArray, size_t sizeOfElements, int (*cmpFunc)(const void *, const void *));

size_t _prtlom(char *array, size_t sizeOfArray, size_t sizeOfElements, int (*cmpFunc)(const void *, const void *));

size_t _getpvt(void *array, size_t sizeOfArray, size_t sizeOfElements, int (*cmpFunc)(const void *, const void *));


#endif