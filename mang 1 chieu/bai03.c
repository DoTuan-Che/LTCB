#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int m[n];
    int sum = 0, sum_duong = 0, sum_am = 0;
    int so_duong = 0, so_am = 0;
    
    
    printf("Nhap %d so nguyen: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        sum += m[i]; 
        
        if (m[i] > 0) {
            sum_duong += m[i]; 
            so_duong++; 
        } else if (m[i] < 0) {
            sum_am += m[i];
            so_am++;
        }
    }
    
    // Tính trung bình cộng
    double avg = (double)sum / n;
    double avg_duong = so_duong ? (double)sum_duong / so_duong : 0;
    double avg_am = so_am ? (double)sum_am / so_am : 0;
    
    // Xuất kết quả
    printf("Tong tat ca phan tu: %d\n", sum);
    printf("Tong so duong: %d\n", sum_duong);
    printf("Tong so am: %d\n", sum_am);
    printf("Trung binh cong cua ca mang: %.2f\n", avg);
    printf("Trung binh cong so duong: %.2f\n", avg_duong);
    printf("Trung binh cong so am: %.2f\n", avg_am);
    
    return 0;
}
