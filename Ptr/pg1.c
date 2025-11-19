//WAP to declare different types of pointers and initialize them with the address of variables . Print the values of variables using both normal variable and pointer variable.
#include <stdio.h>

int main(){
    int n[5];
    int* ptr;
  for(int i=0;i<5;i++){
    printf("Enter value %d: ",i+1);
    scanf("%d",&n[i]);


  }
  printf("The array is: ");
    *ptr = n;
    for (int i; i<5; i++){
        printf("%d ",n[i]);
    }
        
    printf("ptr is storing the value %d and the address %p",*ptr,(void*)ptr);
    return 0;

}