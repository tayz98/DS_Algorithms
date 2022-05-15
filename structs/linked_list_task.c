// status: NOT DONE
// Created by Alexander Nachtigal on 15.05.2022.
//

/* task:
 *  Write a function to create a list in which the inserted elements appear
    elements occur in the order of their insertion (not vice versa as here).
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct listnode{
    int idBook;
    char *title;
    struct listnode *next;
} Listnode;

int main (void) {
    // trash code doesn't work :(
    Listnode *pStart, *p;
    p = (Listnode *) malloc(sizeof (Listnode));
    p->idBook = 1;
    p->title = "Harry Potter #1";
    p = (Listnode *) malloc(sizeof (Listnode));
    p->next->idBook=2;
    p->next->title="Harry Potter #2";
    p->next->next=NULL;
    pStart = p;
    while (p->next != NULL) {
        printf("book id is: %d", p->idBook);
        p->next;
    }

    return 0;
}