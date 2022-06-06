//
// Created by Alexander Nachtigal on 30.04.2022.
//

#include <stdio.h>

typedef struct point {
    int     x, y, z;
} Point;

typedef struct listElement {
    Point      data;
    struct listElement *next; // this pointer shows to itself. (recursive)
} ListElement;







struct vendor{
    char firstname[10];
    char lastname[10];
    int mobile;
    int postalcode;
};

int main(void) {

    struct listElement a,b;
    a.next = &b;// this pointer shows to the struct b.
    b.next = &a; // b shows to struct a.
    struct vendor supplier;
    struct vendor *pAddress;

    pAddress = &supplier;

    (*pAddress).mobile = 34; // brackets are necessary. to make the asterisk execute first before the point operator.
    pAddress->mobile = 32; // does the same thing as above but is the short writing form.
    return 0;
}
