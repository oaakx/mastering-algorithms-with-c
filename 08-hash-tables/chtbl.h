#ifndef __CHTBL_H__
#define __CHTBL_H__

#include <stdlib.h>
#include "list.h"

// Define a structure for chained hash tables.

typedef struct CHTbl_ {
    int buckets;
    
    int (*h)(const void *key);
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);

    int size;
    List *table;
} CHTbl;




#endif
