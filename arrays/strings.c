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
    // fgets can also read from files. scanf only from the terminal.

    // the library 'string.h' has many useful functions for working with strings.
    /* List with useful functions:
     * strcat:  Appends the string pointed to, by src to the end of the string pointed to by dest.
     * strncat: Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.
     * strcmp:  Compares the string pointed to, by str1 to the string pointed to by str2.
     * strncmp: Compares at most the first n bytes of str1 and str2.
     * strlen:  Computes the length of the string str up to but not including the terminating null character.
     * strchr:  Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
     * strstr:  Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack.
     */
    return 0;
}