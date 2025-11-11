#include <stdio.h>

int main() {
    char words[10];  
    int i;

    printf("Enter 10 words:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%c", words[i]); 
    }

    printf("The words you entered are:\n");
    for (i = 0; i < 10; i++) {
        printf("%s/n", words[i]);
    }

    return 0;
}
