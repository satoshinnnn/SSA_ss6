// Xây dựng chương trình yêu cầu người dùng nhập vào chuỗi ký tự số bất kỳ,
// Xây dựng hàm sử dụng đệ quy có chức năng chuyển đổi chuỗi ký tự số đã nhập thành số nguyên.
#include <stdio.h>
#include <string.h>


int checkNum(char str[], int lenStr) {
    for (int i=0; i<lenStr; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}
// tính 10^n
int pow10(int n) {        // đệ quy chạy ngược
    if (n==0) return 1;
    return 10*pow10(n-1);
}

int strToInt(char str[], int lenStr, int index) {      // đệ quy chạy xuôi
    if (index == lenStr) return 0;

    int digit = str[index] - '0';

    return digit*pow10(lenStr-1-index) + strToInt(str, lenStr, index+1);
}

int main() {
    char str[20];
    printf("Enter a string: ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0';  // loạị bỏ kí tự /n ở cuối chuỗi
    int lenStr = strlen(str);
    if (!checkNum(str, lenStr)) {
        printf("Invalid Number");
        return 0;
    }
    printf("string to number %d", strToInt(str, lenStr, 0));
}