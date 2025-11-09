#include <stdio.h>
void calc(int *x,int *y);

int main(){
    int a = 10;
    int b = 5;
    calc(&a,&b);
    return 0;
}

void calc(int *x,int *y){
    printf("sum=%d\n", (*x)+(*y));
    printf("Product=%d\n",(*x)*(*y));
    printf("Division=%d\n",(*x)/(*y));

}