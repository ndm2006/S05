/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b4 S05
*/
#include <stdio.h>

// Định nghĩa cấu trúc để lưu thông tin của số phức
struct Complex {
    double real;  // Phần thực
    double imag;  // Phần ảo
};

// Hàm cộng hai số phức
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Hàm in số phức
void printComplex(struct Complex c) {
    if (c.imag >= 0) {
        printf("%.2lf + %.2lfi", c.real, c.imag);
    } else {
        printf("%.2lf - %.2lfi", c.real, -c.imag);
    }
}

int main() {
    int N;
    struct Complex sum = {0, 0};  // Khởi tạo tổng là số phức 0
    struct Complex temp;

    // Nhập số lượng số phức
    printf("Nhap so luong so phuc N: ");
    scanf("%d", &N);

    // Nhập N số phức và tính tổng
    for (int i = 0; i < N; i++) {
        printf("Nhap so phuc thu %d (phan thuc va phan ao):\n", i + 1);
        printf("Phan thuc: ");
        scanf("%lf", &temp.real);
        printf("Phan ao: ");
        scanf("%lf", &temp.imag);

        sum = add(sum, temp); // Cộng số phức vào tổng
    }

    // In ra kết quả tổng
    printf("Tong cua %d so phuc la: ", N);
    printComplex(sum);
    printf("\n");

    return 0;
}
/* test case
Input: Nhap so luong so phuc N: 3
Nhap so phuc thu 1 (phan thuc va phan ao):
Phan thuc: 1
Phan ao: 2
Nhap so phuc thu 2 (phan thuc va phan ao):
Phan thuc: 3
Phan ao: 4
Nhap so phuc thu 3 (phan thuc va phan ao):
Phan thuc: 5
Phan ao: 6
Output: Tong cua 3 so phuc la: 9.00 + 12.00i
*/
