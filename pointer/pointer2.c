//
// Created by Alexander Nachtigal on 08.04.2022.
//

/* Pointer can be used as function parameter
 * functions will get the pointer which show to a var instead of getting the var.
 * with dereferencing, the function can change the value of dereferenced var.
 * this functionality is called "Call-By-Reference".
 */

// example for Call-By-Reference:

#include <stdio.h>
void swap (int *x, int *y){
    int tmp;
    tmp = *x; *x = *y; *y = tmp;
    return;
}

int main(void){
    // allocating between pointers is only allowed, when it is the same datatype.
    int *iptr;
    char *cptr;
    iptr = cptr; // THIS IS NOT ALLOWED. can lead to many mistakes, compiler should give an error.
    void *gptr; // void pointer can be set to any data type and vice versa. a void pointer is only used for saving an address for later use.
    gptr = cptr; // is allowed. void pointer becomes converted to a char pointer.
    cptr = gptr; // is allowed. char pointers becomes converted to a void pointer.

    // void pointers cannot be dereferenced. example for what is NOT possible/allowed:
    {
        int a = 10;
        void *gptr;
        gptr = &a; // is allowed.
        printf("a = %d, *gptr = %d\n", a, *gptr); // not allowed, the IDE already marked it as an error.
    }

    // another good use case for void pointer can be found in the src file: swapFctWithPointer.c
    return 0;
}