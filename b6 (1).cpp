#include <stdio.h>

int main() {
    float a, b, x;

    // Nh?p h? s? a và b t? ngu?i dùng
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Gi?i phuong trình b?c nh?t ax + b = 0
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -b / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    }

    return 0;
}
