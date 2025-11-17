//WAP using insertion in array
#include <stdio.h>

void insert(int arr[], int n, int value, int position) {
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int value = 10;
    int position = 2;

    insert(arr, n, value, position);
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
