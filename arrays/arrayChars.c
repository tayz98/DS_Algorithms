#include <stdio.h>
#define FIELDLENGTH 26

int main (void){
    char feld[FIELDLENGTH];
    int i, number;
    for (int i=0;i<FIELDLENGTH;i++){
        feld[i] = 'a'+i;
    }
    while (1){
    printf("Enter a number between '1' and '26' (to end the program, enter '100'): \n");
    scanf("%d", &number);
    if (number==100){
        break;
        } 
    else if (number<1 || number >26){
        printf("......... wrong input, please repeat\n");
    } else 
    printf(" ->>> %d. lowercase letter = %c\n\n", number, feld[number-1]);
    }
    printf("--------end--------\n");
    return 0;
}