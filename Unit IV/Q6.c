#include <stdio.h>
struct B {
char c;
char d; 
int i; 
};

int main() {
printf("%lu", sizeof(struct B));
return 0;
}