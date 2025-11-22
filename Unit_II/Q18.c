 #include <stdio.h>
  int main() {
     int a = 10, b = 5, c = 20; 
     int result = a > b ? b > c ? b : c : a;
      printf("%d", result);
    return 0;
 }