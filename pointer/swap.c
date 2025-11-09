#include <stdio.h>

void swap(int *a , int *b);

int main(){
    int a=3;
    int b=5;
    swap(&a,&b);
    printf("a=%d\n b=%d\n", a , b);
    return 0;
}

void swap(int *x,int *y){
    int t = *x;
     *x = *y;
     *y = t;
   
}