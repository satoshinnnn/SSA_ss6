#include <stdio.h>
// tinh tong de quy
int sumRecursive(int m, int n) {
    if (m==n) return n;
    return m + sumRecursive(m-1,n);
}
int main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a number: ");
    scanf("%d", &m);
    if (n<=0 || m <=0 ) {
        printf("Invalid value");
        return 0;
    }
    printf("%d ", sumRecursive(m,n));
}