#include <stdio.h>
// Declaring the functions for later use in the code.
int input(void);
int compute(int);
void output(int);

int main (void){
    int number = input();          // calling the function.
    number = compute(number);
    output(number);
    return 0;
}

int input(void){       // function of the type: int 'name' void
    int number1;
    int number2;
    printf("Please enter an integer number, which should be powered up by 2.: \n");
    scanf("%d", &number1);
    return number1;
}

int compute(int x){   // function of the type: int 'name' int
    int result;
    result = x * x;
    return result;
}

void output(int result){    // function of the type: void 'name' int
    printf("The entered number to the power of 2 is:  %d\n", result);
}