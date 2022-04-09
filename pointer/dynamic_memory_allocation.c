//
// Created by Alexander Nachtigal on 09.04.2022.
//
/*
    often times it is not known how much space for a task is needed. In this case, it is necessary to use dynamic memory.
    example: databases with data from persons: add more persons.

    in order to use dynamic memory, we can use the library function malloc().
    the function provides a specific number of bytes in the memory and gives the pointer for the first byte as return.
    malloc uses void pointer, because often times the user doesn't know which datatype he wants to use/return/whatever.
*/

//example:
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int amount;
    int number;
    int *numbers;
    int *run;

    printf("Enter how many numbers you want to give.\n");
    scanf("%d", &amount);
    getchar(); //get char cleans the "\n" from the keyboard buffer.
    numbers = (int *) malloc(sizeof(int) *amount); // malloc gets the information how much space(bytes) is given.
                                                        // with this information, malloc finds a new memory space and return the first address to it as a generic pointer.
                                                        // we need to cast an int to malloc, because we allocate the pointer address to an int type pointer (in this case: numbers)

    run = numbers;
    for (int i = 0; i < amount; i++){
        printf("Enter a number \n");
        scanf("%d", &number);
        getchar();
        *run = number;                                  // *run gets the value from number
        run++;                                          // run gets incremented with 4 bytes and shows to the next memory cell.
    }

    run = numbers;

    for (int i = 0; i < amount; i++){
        printf("number %d = %d\n", i+1, *run); // the information of the memory element which "run" shows to, will be printed out.
        run++;
    }
    return 0;
}