#include <stdio.h>
#include <stdlib.h>
// tinh tong mang de quy
int sumRecursive(int arr[], int n) {
    int index = n - 1;
    if (index == 0) return arr[0];
    return arr[index] + sumRecursive(arr, index);
}
int main() {
    int n;
    printf("Enter number of elements in array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf( "Invalid input\n");
        return 1;
    }

    int *arr = malloc(n * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("sum of array: %d", sumRecursive(arr, n));
}