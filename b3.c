/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b3 S05
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

// Hàm trừ hai số phức
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Hàm nhân hai số phức
struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

// Hàm chia hai số phức
struct Complex divide(struct Complex a, struct Complex b) {
    struct Complex result;
    double denominator = b.real * b.real + b.imag * b.imag; // Mẫu số
    if (denominator == 0) {
        printf("Khong the chia cho so phuc bang 0.\n");
        result.real = 0;
        result.imag = 0;
    } else {
        result.real = (a.real * b.real + a.imag * b.imag) / denominator;
        result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    }
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
    struct Complex a, b;

    // Nhập hai số phức từ bàn phím
    printf("Nhap so phuc a (phan thuc va phan ao):\n");
    printf("Phan thuc: ");
    scanf("%lf", &a.real);
    printf("Phan ao: ");
    scanf("%lf", &a.imag);

    printf("Nhap so phuc b (phan thuc va phan ao):\n");
    printf("Phan thuc: ");
    scanf("%lf", &b.real);
    printf("Phan ao: ");
    scanf("%lf", &b.imag);

    // In ra nội dung của a và b
    printf("So phuc a: ");
    printComplex(a);
    printf("\n");

    printf("So phuc b: ");
    printComplex(b);
    printf("\n");

    // Thực hiện các phép toán
    struct Complex sum = add(a, b);
    struct Complex diff = subtract(a, b);
    struct Complex product = multiply(a, b);
    struct Complex quotient = divide(a, b);

    // In kết quả
    printf("a + b = ");
    printComplex(sum);
    printf("\n");

    printf("a - b = ");
    printComplex(diff);
    printf("\n");

    printf("a * b = ");
    printComplex(product);
    printf("\n");

    printf("a / b = ");
    printComplex(quotient);
    printf("\n");

    return 0;
}
/*test case
Input: Nhap so phuc a (phan thuc va phan ao):
Phan thuc: 5
Phan ao: 3
Nhap so phuc b (phan thuc va phan ao):
Phan thuc: 2
Phan ao: 3
Output: So phuc a: 5.00 + 3.00i
So phuc b: 2.00 + 3.00i
a + b = 7.00 + 6.00i
a - b = 3.00 + 0.00i
a * b = 1.00 + 21.00i
a / b = 1.46 - 0.69i
*/
