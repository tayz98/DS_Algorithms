//
// Created by Alexander Nachtigal on 09.04.2022.
//

// void pointer can be useful for functions, that work with different datatype.

// example for a swap function, that can switch any kind of datatype.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap (void *x, void *y, int size){

    // it is easier to use this fct with generic pointer.
    void *tmp;
    if ((tmp = malloc(size)) == NULL) { return -1; }
    memcpy(tmp, x, size); // copies byte for byte from x(src) to tmp (dst) with the size "size".
    memcpy(x, y, size);
    memcpy(y, tmp, size);
    free(tmp);
    return 0;
}

