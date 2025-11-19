//Perform pointer arithmetic on pointers(Increment/Decrement) of different data types and observe
//the changes in the memory addresses stored in the pointer variables.
#include <stdio.h>
int main() {
    int intVar = 10;
    float floatVar = 20.5;
    char charVar = 'A';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    printf("Initial Addresses:\n");
    printf("intPtr: %p, floatPtr: %p, charPtr: %p\n", (void*)intPtr, (void*)floatPtr, (void*)charPtr);

    intPtr++;
    floatPtr++;
    charPtr++;

    printf("After Incrementing:\n");
    printf("intPtr: %p, floatPtr: %p, charPtr: %p\n", (void*)intPtr, (void*)floatPtr, (void*)charPtr);
 
    intPtr--;
    floatPtr--;
    charPtr--;

    printf("After Decrementing:\n");
    printf("intPtr: %p, floatPtr: %p, charPtr: %p\n", (void*)intPtr, (void*)floatPtr, (void*)charPtr);

    return 0;
}