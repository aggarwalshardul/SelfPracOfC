 #include <stdio.h>
 int main() {
     for (int i = 1; i <= 3; i++) { 
        switch(i) {
case 1: break;
case 2: continue;
 default: printf("%d ", i); } }
return 0;
 }