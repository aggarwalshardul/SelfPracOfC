#include <stdio.h>

int main(){
    int age = 3;;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("age = %d",**pptr);
    return 0;
}
