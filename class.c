//Declare a global variable outside of any function and used it inside various functions to understand its accessibility
#include <stdio.h>
int globalVar = 10; 
void functionA() {
    printf("Function A: Global Variable = %d\n", globalVar);
}
void functionB() {
    globalVar += 5;
    printf("Function B: Global Variable after increment = %d\n", globalVar);
}
int main() {
    printf("Main Function: Global Variable = %d\n", globalVar);
    functionA();
    functionB();
    printf("Main Function after Function B: Global Variable = %d\n", globalVar);
    return 0;
}
