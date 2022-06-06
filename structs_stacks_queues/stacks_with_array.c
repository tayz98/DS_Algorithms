//
// Created by Alexander Nachtigal on 06.06.2022
//

#define MAX 100


int stack[MAX], index1;

void stackinit(void) {
    index1 = 0;
}

void push (int in) {
    stack[index1++] = in;
}

int pop(void) {
    return stack[--index1];
}