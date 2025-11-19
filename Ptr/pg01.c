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
    ptr = &n[0]; // Initialize pointer to the address of the first element of the array
    for (int i=0; i<5; i++){
        printf("%d ", *(ptr + i)); // Accessing values using pointer arithmetic
    }
    
    printf("\nptr is storing the value %d and the address %p\n", *ptr, (void*)ptr);
    for(int i=0;i<5;i++){
        printf("Elements of array:%d\n",n[i]);
    }
    return 0;
}