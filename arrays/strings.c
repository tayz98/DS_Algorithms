//
// Created by Alexander Nachtigal on 02.04.2022.
//

// C doesn't have a data type for String. Therefore, you use an array with the datatype of a char to represent a string.

#include <stdio.h>
#define MAX 100

int main(void){
    char field[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // convention: the ending of a string must be marked with a '\0'
    char field2[] = {"Hello"}; // easier method to initialize a string. here you don't need a '\0'
    printf("%s", field); // prints out the initialized string. the array of the string name is enough. no need for brackets.

    // an integer array can be printed out as a string:
    int i;
    int str[] = {72, 97, 108, 108, 11, 33, 10, 0}; // the 0 will be translated to '\0'
    for (i=0; i<(sizeof (str)/sizeof (int)); i++)
    {
    printf("%c"), str[i]; // prints out "Hallo!"
    }

    // read a string:
    char array[MAX];
    scanf("%s", array); // no need to use the address operator '&' because 'array' already contains an address.
                              // the name of the array symbolizes the address of the first array element.
    // how to use fgets and fputs
    char str1[MAX];
    printf("Please enter a text");
    fgets(str, MAX, stdin); // arguments: the name of the string, the size of the array and the source
                                              // the equivalent with scanf would be: scanf("%s", str); -> fflush(stdin);
    fputs(str, stdout);               // fputs writes the string 'str' to stdout (without the '\0)

    // difference between scanf and fgets is: scanf only reads till space, while fgets reads till '\n' (or EOF)

    // the library 'string.h' has many useful functions for working with strings.
    /* List with useful functions:
     * strcat, strncat:
     *
     *
     *
     *
     *
     *
     *
     */
    return 0;
}