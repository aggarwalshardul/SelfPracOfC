#include <stdio.h>
struct A {
char c; 
int i; 
};
int main() {
printf("%lu", sizeof(struct A));
return 0;
}
