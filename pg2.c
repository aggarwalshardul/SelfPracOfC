//WAP to convert a decimal number to binaray , octal and hexadecimal without using liberary function.
#include <stdio.h>
void convertDecimal(int num);
int main(){
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    convertDecimal(number);
    return 0;
}
void convertDecimal(int num){
    int binary[32], octal[32], hexadecimal[32];
    int i = 0, j = 0, k = 0;
    int decimalNum = num;

    while (decimalNum > 0) {
        binary[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }
    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    decimalNum = num;

    while (decimalNum > 0) {
        octal[k] = decimalNum % 8;
        decimalNum /= 8;
        k++;
    }
    printf("Octal: ");
    for (j = k - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    decimalNum = num;

    while (decimalNum > 0) {
        int rem = decimalNum % 16;
        if (rem < 10) {
            hexadecimal[k] = rem + '0';
        } else {
            hexadecimal[k] = rem - 10 + 'A';
        }
        decimalNum /= 16;
        k++;
    }
    printf("Hexadecimal: ");
    for (j = k - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}
