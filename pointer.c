//
// Created by Alexander Nachtigal on 02.04.2022.
//

/* Pointer:
 * A pointer saves the address of a memory cell.
 * A pointer contains the information, where the first byte of a variable is found.
 * definition of a pointer: "datatype *variablename;" -> this command is needed to get the information of the variable which is pointed by the dereference operator
 * pointer use the dereference operator "*" in german: "Dereferenzierungsoperator"
 * how to find the address of a variable in the ram: nameOfPointerVariable = &nameOfVariable;
 * Areas of application:
   dynamic reservation, managing and deleting of memory locations
   enables growing or shrinking of a memory location
   it can transfer a variable to a function
   it can manipulate external variables (that are not in the function)
   it is the opposite of call by value.
   it enables the creation of recursive data structures like lists or trees.
   it can transmit a function as an argument to another function.
 */



#include <stdio.h>

int main (void){
    // examples of pointer definitions:
    float *pSum;
    float *pResult;
    char c = 10;
    char *ptr; // this variable can save an address. in this case a random memory cell. should be avoided!

    // examples of using address and content operators:
    int sum = 26;
    int *psum;
    psum = &sum; // psum saves the memory address of sum. basically: psum shows to sum.
    printf("sum = %d\n", *psum); // will print the number of sum. (in this case 26)
    //*ptr = &c; saves the memory address of the memory cell of the variable c to *ptr.
    // the address variable "ptr" is not only a pointer but has also a memory cell "&ptr" too.

    // more examples
    int variable = 10;
    int *iPtr=NULL; // this pointer shows to nothing, not even to a random memory location.
    iPtr = &variable; // variable and iPtr both have the value "10"
    printf("After allocating: variable = %d\n", variable);
    printf("*iPtr = %d\n", *iPtr);
    *iPtr = 20; // this will change int variable to 20.
    printf("After manipulating: variable = %d\n, variable");
    printf("*iPtr = %d\n", *iPtr);
    variable = 30; // this will change the value of *iPtr to 30.
    printf("After manipulating: variable = %d\n, variable");
    printf("*iPtr = %d\n", *iPtr);
    printf("Address of *iPtr: %p", *iPtr); // can be used to check the memory cell of a pointer

    // pointers can be used for arithmetic operations:
    int *random_ptr;
    int value = 2;
    random_ptr = &value;
    random_ptr += 10; // increases the pointer value of 10 times the * datatype.

/*  additional notes:
 *  it is bad practice defining a pointer without initializing it. better is it to initialize with NULL.
*/

    return 0;
}
