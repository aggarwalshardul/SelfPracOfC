#include <stdio.h>
void rev(int arr[], int n);
void print(int arr[],int n);

int main(){
    int num;
    
    
    printf("Size of array= ");
    scanf("%d",&num);

    int arr[num];

    for(int i=0;i<num;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
        
    }
    rev(arr, num);
    print( arr, num);

    return 0;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstVal=arr[i];
        int secVal=arr[n-i-1];
        arr[i]=secVal;
        arr[n-i-1]=firstVal;

    }
}