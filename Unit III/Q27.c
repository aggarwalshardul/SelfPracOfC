#include <stdio.h>
 int fact(int n) { 
    if(n == 0) return n;
     return n * fact(n-1); 
    } int main() {
printf("%d", fact(4)); 
return 0; 
}
