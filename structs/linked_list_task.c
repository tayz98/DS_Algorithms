// status: DONE! :=)
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

    Listnode *pStart =NULL;
    pStart = (Listnode *) malloc(sizeof (Listnode));
    pStart->idBook = 1;
    pStart->title = "Harry Potter #1";
    pStart->next = (Listnode *) malloc(sizeof (Listnode));
    pStart->next->idBook=2;
    pStart->next->title="Harry Potter #2";
    pStart->next->next=NULL;
    Listnode *current = pStart;
    while (current != NULL) {
        printf("book id is: %d\n", current->idBook);
        current = current -> next;
    }
    return 0;
}