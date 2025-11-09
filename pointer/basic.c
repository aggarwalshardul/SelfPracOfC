#include <stdio.h>
 int main(){
int age = 20;
int *pAge = &age;
int ageN = *pAge;
printf("Age: %d\n", ageN);
return 0;

 }