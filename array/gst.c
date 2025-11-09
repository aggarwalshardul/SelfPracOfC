#include <stdio.h>
int main(){
    float price[3]={100,200,300};
    printf("Total price of 1=%f\n",price[0]+(price[0]*0.18));
    printf("Total price of 2=%f\n",price[1]+(price[1]*0.18));
    printf("Total price of 3=%f\n",price[2]+(price[2]*0.18));
    return 0;
}