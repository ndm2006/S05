/*
Author: Nguyễn Đức Mười
Purpose: Assignment 7
b2 S05
*/
#include <stdio.h>
#include <math.h>

// Định nghĩa cấu trúc để lưu thông tin của phương trình bậc 2
struct QuadraticEquation {
    double a;
    double b;
    double c;
    int numSolutions;
    double root1;
    double root2;
};

void solveQuadraticEquation(struct QuadraticEquation *eq) {
    double discriminant = eq->b * eq->b - 4 * eq->a * eq->c; // Tính delta

    if (discriminant > 0) {
        eq->numSolutions = 2;
        eq->root1 = (-eq->b + sqrt(discriminant)) / (2 * eq->a);
        eq->root2 = (-eq->b - sqrt(discriminant)) / (2 * eq->a);
    } else if (discriminant == 0) {
        eq->numSolutions = 1;
        eq->root1 = -eq->b / (2 * eq->a);
        eq->root2 = 0; // Giá trị này không cần thiết khi có một nghiệm
    } else {
        eq->numSolutions = 0;
        eq->root1 = 0; // Giá trị này không cần thiết khi không có nghiệm
        eq->root2 = 0; // Giá trị này không cần thiết khi không có nghiệm
    }
}

int main() {
    struct QuadraticEquation eq;
    char choice;

    do {
        // Nhập các hệ số từ bàn phím
        printf("Nhap he so a (a != 0): ");
        while (1) {
            scanf("%lf", &eq.a);
            if (eq.a != 0) {
                break; // Nếu a khác 0 thì thoát vòng lặp
            }
            printf("He so a phai khac 0. Nhap lai he so a: ");
        }

        printf("Nhap he so b: ");
        scanf("%lf", &eq.b);
        printf("Nhap he so c: ");
        scanf("%lf", &eq.c);

        // Giải phương trình bậc 2
        solveQuadraticEquation(&eq);

        // In ra kết quả
        printf("So nghiem: %d\n", eq.numSolutions);
        if (eq.numSolutions == 2) {
            printf("Nghiem 1: %.2lf\n", eq.root1);
            printf("Nghiem 2: %.2lf\n", eq.root2);
        } else if (eq.numSolutions == 1) {
            printf("Nghiem duy nhat: %.2lf\n", eq.root1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }

        // Hỏi người dùng có muốn giải thêm phương trình nữa không
        printf("Ban co muon giai them phuong trinh khac? (y/n): ");
        getchar(); // Đọc ký tự xuống dòng còn lại trong bộ đệm
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
