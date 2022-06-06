//
// Created by Alexander Nachtigal on 06.06.2022.
//

/*
 * Stacks (german: Stapel)
 * Implementation is possible in the form of a simple linked list.
 * two basic operations:
 * 1. Place element on the stack -> push
 * 2. Remove element from the stack -> pop
 * elements are either placed or remove from the top of the stack.
 */

#include <stdlib.h>
#include <stdio.h>

void stackinit(void);
void push(int);
int pop(void);
// declare struct first
struct node {
    int key;
    struct node *next;
};

struct node *head, *tail, *tmp;
int main(void) {


    return 0;
}

void stackinit(void) {
    head = (struct node *) malloc (sizeof *head); // *head is the alternative for (sizeof (struct node))
    tail = (struct node *) malloc (sizeof *tail);
    head->next = tail;
    head->key = 0;
    tail->next = tail; // instead of NULL, we can also use tail which shows to itself.
    tail->key = 0;
    return;
}

void push (int in) {
    tmp = (struct  node*) malloc(sizeof *tmp);
    tmp->key = in;
    tmp->next = head->next;
    head->next = tmp;
    return;
}

int pop (void) {
    int value;
    tmp = head->next;
    head->next = tmp->next;
    value = tmp->key;
    free(tmp);
    return value;
}