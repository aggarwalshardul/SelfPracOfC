//WAP to find disjoint of Three sets
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    int i;

printf("Enter the elements for array1");
for(i=0;i<=n;i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
printf("Enter the elements for array2");
for(i=0;i<=n;i++){
    printf("b[%d] = ", i);
    scanf("%d", &b[i]);
  }
printf("Enter the elements for array3");
for(i=0;i<=n;i++){
    printf("c[%d] = ", i);
    scanf("%d", &c[i]);
  }
  
    
printf("Disjoint elements are: ");
for(i=0;i<n;i++){   
    if((a[i]!=b[i]) && (a[i]!=c[i]) && (b[i]!=c[i])){
        printf("%d ",a[i]);
        printf("%d ",b[i]);
        printf("%d ",c[i]);
    }
    return 0;
}
}