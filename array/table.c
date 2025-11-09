#include <stdio.h>

void strTable(int arr[][10],int x,int y,int number);

int main(){
    int table[2][10];
    strTable(table,0,10,2);
    strTable(table,1,10,3);

     for(int i=0;i<10;i++){ // 0 to 10
        printf("%d  ",table[0][i]);
    }
    printf("\n");
     for(int i=0;i<10;i++){ // 0 to 10
        printf("%d  ",table[1][i]);
    }
    return 0;

}

void strTable(int arr[][10],int x,int y,int number){
    for(int i=0;i<y;i++){ // 0 to 10
        arr[x][i]=number*(i+1);
    }

}