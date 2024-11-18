#include <stdio.h>

int main() {
    float a, b, ketQua;
    char phepTinh;

    // Nh?p hai s? t? ngu?i dùng
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);

    // Nh?p phép tính t? ngu?i dùng
    printf("Nhap phep tinh (+, -, *, /): ");
    scanf(" %c", &phepTinh);

    // Ki?m tra và th?c hi?n phép tính
    switch (phepTinh) {
        case '+':
            ketQua = a + b;
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, ketQua);
            break;
        case '-':
            ketQua = a - b;
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, ketQua);
            break;
        case '*':
            ketQua = a * b;
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, ketQua);
            break;
        case '/':
            if (b != 0) {
                ketQua = a / b;
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, ketQua);
            } else {
                printf("Loi: Khong the chia cho 0\n");
            }
            break;
        default:
            printf("Phep tinh khong hop le\n");
    }

    return 0;
}
