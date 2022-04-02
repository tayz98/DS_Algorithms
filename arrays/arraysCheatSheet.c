#include <stdio.h>
#define FIELDLENGTH 100

int main(void){
    int i;
    int a[] = {3,4,5,6,7};     // initializing when defining.
    int b[8];
    char string1 [] = {'a', 'b', 'c'}; // intializing a string with chars.,
    char string2 [] = {"abc"}; // easier method to initialize a string
    int field[FIELDLENGTH];

    b[7] = 3; // assigning a value to a specific index/element of an array/field.
    for (i = 0; i<FIELDLENGTH; i++){ //Array mit Zahlen von 1 bis 100 befüllen.
        field[i] = i+1;
    }

    for (i = 0; i < 5; i++){   // prints the elements of an array.
        printf("%d \n", a[i]);
    }

    for (i=FIELDLENGTH-1; i>=0; i--){ // prints the elements of an array in opposite order.
        printf("%d", field[i]);
    }

    printf("field size %lu bytes.\n", sizeof(field)); // determines the array size
    printf("field size %lu elements\n.", sizeof(field)/sizeof(int)); // determines the number of elements in an array
    printf("\n");
    
    for (i = 0; i < 8; i++){  // initializes the element of an array one by one.
        b[i] = 2*i; 
        printf("%d\n", b[i]);
    }
    scanf("%d", &a[1]); // assigning an element of an array with 'scanf'
    printf("\n\n");
    return 0;
}

/* Array size cannot be changed later on
   last element of an array is the size of the array minus one.
   array element can be selected by the index
   It is not a must to enter the size of an array.*/