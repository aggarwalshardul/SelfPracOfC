#include <stdio.h>
int main() {
int a = 2, b = 5, c = 10;
int result = a > b ? b > c ? b : c : a;
printf("%d", result);
return 0;
}
