#include <stdio.h>
// tinh tong de quy
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i >=1; i--) {
        printf("%d\n", fib(i));
    }
}