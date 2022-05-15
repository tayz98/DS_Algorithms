//
// Created by Alexander Nachtigal on 29.04.2022.
//

// Structs are data packages that can consist of several variables with different data types.

#include <stdio.h>

// example:
struct point { // this doesn't take a memory space.the struct just got declared but not initialized.
    int x;
    int y;
};

//example for anonymous declaration of a struct:
struct {
    char firstname[10];
    char lastname[10];
    int mobile;
    int postalcode;
} customer, vendor; // you can also use this to access the struct variables.

// example no. 3 with typedef

typedef struct {
    char street[10];
    char city[10];
    int code;
} ADDRESS;
int main(void) {

    struct point p; // p is a variable name and takes 8 byte space (2 x int). this is the definition.
    p.x = 2; // use point to access a variable from a struct.
    p.y = 3;
    customer.mobile = 300;

    typedef struct point p2; // p2 is a datatype of a struct.
    p2 x, y; // p2 is used here to create new variables

    ADDRESS c1[100]; // same as above but with an array
    c1[2].city = "b"; // 123
    return 0;
}