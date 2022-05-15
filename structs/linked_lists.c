//
// Created by Alexander Nachtigal on 15.05.2022.
//
/* linked lists:
 * we put the elements in the right order with the help of pointers.
 * this process is called explicit sequential ordering.
 * a linked list can dynamically shrink or grow through memory allocation.
 * therefore, they allow a good flexibility or sorting of the elements.
 * disadvantage: it takes more time to find an element,
 * because the n-th element cannot be calculated like in an array.
 * complexity for finding the n-th element in a list is O(n)
 * we also cannot go back. the move-ability is bad.
 * unintuitive delete and insert-functions.
 * a double linked list can fix the disadvantages (see: later)
 */

#include <stdlib.h>
#include <stdio.h>
// if the following code explanation doesn't help:
// look here: https://www.learn-c.org/en/Linked_lists


typedef struct listnode {
    unsigned articleNumber; // from artibleNumber to price we have our data
    char *article;
    double price;
    struct listnode *next; // linked pointer: shows to the struct (itself)
} Listnode;
int main (void) {
    // creating a list in vice versa order:
    Listnode *pstart=NULL, *p;
    p = (Listnode *) malloc (sizeof (Listnode)); // void pointer becomes converted to a Listnode pointer
    p->articleNumber = 123;
    p->article = "Shirt";
    p->price = 9.90;
    p->next = NULL; // set pointer to the first list element. As there is none yet -> NULL
    pstart = p; // start pointer pstart get's the address of p. pstart shows now to the beginning of the list.
    // p is now free.
    p = (Listnode *) malloc (sizeof (Listnode)); // again for memory allocation the next element.
    p->articleNumber = 456;
    p->article = "Hoodie";
    p->price = 20;
    p->next = pstart; // linking the new element to the existing element.
    pstart = p; // p is free again.
    // the previous steps can be repeated for creating and linking new elements.

    // now we want to access the elements through a running pointer
    p = pstart;
    printf("article number is %d\n", p->articleNumber); // prints 456
    p = p->next; // we jumped to a new element;
    printf("article number is %d\n", p->articleNumber); // prints 123
    // prints in vice versa order.
    // for preventing an error we can do this while-loop
    while (p->next != NULL) {
        // some code
        p = p->next;
    }
    // we could also add && (p->articleNumber !=456) to the while loop, for searching an extra element.

    // let's say we would like to delete an element.
    // first we need a help pointer:
    Listnode *ptemp;
    ptemp = p->next; // if we know that the element is 1 step away
    p->next = ptemp -> next; // the pointer p skips one element which ptemp showed to.
    // now we can delete the element which ptemp shows to.
    free(ptemp);

    // in the next steps, we want to insert a new element to the n-th position.
    Listnode *pv; // run pointer
    int i = 3;
    for (int j = 1; j<-1; j++) {
        pv = pv->next;
    } // pv shows to the element before i
    p -> next = pv -> next; // inserts the element to the i-th position.
    pv -> next = p; // p is now free
    return 0;
}