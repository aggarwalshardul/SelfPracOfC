#include <stdio.h>

int main(){
    int n;
    printf("enter n(n>1) : ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("Fibo sequence is: 0\t1\t");
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf(" %d\t",fib[i]);
    }
    
    return 0;
}