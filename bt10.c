//Xây dựng chương trình yêu cầu người dùng nhập vào số hàng và số cột của một mảng hai chiều
// Bắt đầu từ ô(0, 0)(ô ở góc trên cùng bên trái) và di chuyển đến ô(row-1, col-1)(ô ở góc dưới cùng bên phải)

#include <stdio.h>
int count(int row, int col, int indexR, int indexC, int blockRowIndex, int blockColIndex) {
    if (indexR == blockRowIndex && indexC == blockColIndex) return 0;
    if (indexR>=row || indexC >=col) return 0;
    if (indexR == row-1 && indexC == col -1 ) return 1;
    return count(row, col, indexR +1, indexC, blockRowIndex, blockColIndex) + count(row, col, indexR,indexC +1, blockRowIndex, blockColIndex);
}
int main() {
    int row, col, i =0, j=0;
    int blockRowIndex, blockColIndex;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);
    printf("Enter the block row index : ");
    scanf("%d", &blockRowIndex);
    printf("Enter the block col index : ");
    scanf("%d", &blockColIndex);
    printf("So duong di la: %d ", count(row, col, 0, 0,blockRowIndex, blockColIndex));
}

