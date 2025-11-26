 #include <stdio.h>
  int main() {
     int arr[2][2] = {{1,2},{3,4}}; 
     printf("%d", *(&arr[0][0] +3)); 
    return 0;
}
