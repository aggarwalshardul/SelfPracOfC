#include <stdio.h>
void fun() { 
    const int x = 0; 
    x++; printf("%d ", x); 
} 
int main() { 
    fun();
    fun(); 
    fun();
return 0;
}