#include <stdio.h>
struct C {
char c; 
double d; 
int i; 
};
int main() {
printf("%lu", sizeof(struct C));
return 0;
}