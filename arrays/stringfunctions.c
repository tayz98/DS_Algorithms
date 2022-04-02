//
// Created by Alexander Nachtigal on 02.04.2022.
//
// examples of functions from string.h

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 80

int main (void){
    char ice[5] = {"Ice"}; // this array has 4 elements initialized but not the fifth one. remember: the last element of an char array is: '\0'
                               // we need space for the fifth element for copying.
    char bear[] = {"Bear"};

    int size;

    size = sizeof(ice) / sizeof(char);

    // strlen and strcpy:
    if (size >= strlen(bear) + 1)
    {
        strcpy(ice, bear);
        printf("%s\n", ice); // prints "Baer" to the console. this function overwrites the content of ice[] with bear[]
    }

    /* from ctype.h:
     * int toupper(int c): letter case will be transformed to upper case.
     * int tolower(int c): vice versa
     * many more...

       from stdlib:
     * int atoi(char[] str): transform a char to an int value. */

    // convert function

    char input[MAX], str[MAX];
    char c;
    int i = 0, j = 0, result = 0;

    printf("Enter a string\n");
    fgets(input, MAX, stdin);       // reads the string 'input' with fgets

    while( ( c = input[i]) != '\0')
    {
        if (isdigit(c))         // if it is a digit, save/write it to a different string.
        {
            str[j++] = c;
            input[i] = '-';
        }
        else if (isalpha(c) && islower(c)) // isalpha checks for letter. islower checks for lower letter.
        {
            input[i] = toupper(c); // converts lower case letter to upper case.
        }
    }
    result = atoi(str);
    printf("The result is now:\n&s", input);
    printf("The number is: %d\n",  result);
    return 0;


}