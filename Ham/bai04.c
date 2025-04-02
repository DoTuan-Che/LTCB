#include <stdio.h>

#define MAX 10

void nhapMaTran(int a[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhập phần tử a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void tongMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tichMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;

    // Nhập số hàng, số cột của ma trận A
    printf("Nhập số hàng và số cột của ma trận A: ");
    scanf("%d %d", &m, &n);

    // Nhập ma trận A
    printf("Nhập ma trận A:\n");
    nhapMaTran(A, m, n);

    // Nhập số cột của ma trận B (số hàng của B phải bằng số cột của A)
    printf("Nhập số cột của ma trận B: ");
    scanf("%d", &p);

    // Nhập ma trận B (số hàng của B phải bằng số cột của A)
    printf("Nhập ma trận B:\n");
    nhapMaTran(B, n, p);

    // Tính tổng hai ma trận (chỉ khi cùng kích thước)
    if (m == n && n == p) {
        tongMaTran(A, B, C, m, n);
        printf("Tổng hai ma trận:\n");
        inMaTran(C, m, n);
    } else {
        printf("Không thể tính tổng vì kích thước hai ma trận không khớp!\n");
    }

    // Tính tích hai ma trận
    tichMaTran(A, B, C, m, n, p);
    printf("Tích hai ma trận:\n");
    inMaTran(C, m, p);

    return 0;
}
