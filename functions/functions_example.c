#include <stdio.h>

int smaller(int a, int b);
int main (void){
    int number1;
    int number2;
    printf("Please enter integer numbers: \n");
    printf("The first number: \n");
    scanf("%d", &number1);
    printf("The second number: \n");
    scanf("%d", &number2);
    switch (smaller(number1, number2)){
        case 0: 
        printf("Both numbers have the same value\n");
        break;
        case 1: 
        printf("The first number is smaller\n");
        break;
        case -1:
        printf("The  second number is bigger\n");
        break; 
    }
    return 0;
}

int smaller(int a, int b){
        if (a < b){
            return 1;
        }
        else if (a > b){
            return -1;
        }
        else{ 
            return 0;
    }
}