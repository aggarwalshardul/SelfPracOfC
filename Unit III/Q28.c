 #include <stdio.h>
  int fun(int n) {
     if(n <= 0) return 0;
    return n + fun(n-2);
 } 
 int main() {
printf("%d", fun(6));
return 0; 
}
