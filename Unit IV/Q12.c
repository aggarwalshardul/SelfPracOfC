#include <stdio.h>
union A {
int x; 
char y; 
};
int main() {
printf("%lu", sizeof(union A));
return 0;
}
