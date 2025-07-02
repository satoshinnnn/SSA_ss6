#include <stdio.h>
void printBinanry(int n) {
    if (n==0) return;
    printBinanry(n/2);
    printf("%d \n", n%2);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printBinanry(n);
}