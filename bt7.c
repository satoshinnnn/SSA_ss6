#include <stdio.h>
#include <stdlib.h>
int fibonacci(int i) {
    if (i == 0) return 0;   // base case
    if (i == 1) return 1;   // base case
    return fibonacci(i - 1) + fibonacci(i - 2);
};
int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    int *arr = malloc(n * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
