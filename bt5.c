#include <stdio.h>
#include <string.h>

// kiem tả chuoi doi xung de quy
int checkDoiXung(char str[], int left, int right) {
    if (left >= right) return 1;
    if (str[left] != str[right]) return 0;
    return checkDoiXung(str, left+1, right-1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (strlen(str) > 0 && str[strlen(str)-1] == '\n')
        str[strlen(str)-1] = '\0';

    if (!checkDoiXung(str, 0, strlen(str)-1)) {
        printf("Chuoi khong doi xung\n");
    }
    else {
        printf("Chuoi doi xung\n");
    }
}