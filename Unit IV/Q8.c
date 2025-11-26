#include <stdio.h>
struct C {
char c; 
int i; 
double d; 
};
int main() {
printf("%lu", sizeof(struct C));
return 0;
}
