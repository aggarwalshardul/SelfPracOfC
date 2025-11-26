#include <stdio.h>
union B {
int x;
double y; 
char z; 
};
int main() {
printf("%lu", sizeof(union B));
return 0;
}
