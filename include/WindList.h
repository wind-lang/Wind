#ifndef WIND_LIST_H
#define WIND_LIST_H
//wind list header

#include "WindObject.h"
#include "SafeAlloc.h"
#include <stdlib.h>

//initializes a WindList*
#define WindList_INIT(wlst, listSize) do { \
                SAFE_ALLOC_M(wlst, sizeof(WindList)); \
                SAFE_ALLOC_M(wlst->begin, (sizeof(WindItem) * listSize)); \
                wlst->mark = wlst->begin; \
                wlst->end = wlst->mark + listSize; \
} while(0)

void WindList_free(WindList* wlst);

WindList* WindList_new(size_t listSize);


#endif
