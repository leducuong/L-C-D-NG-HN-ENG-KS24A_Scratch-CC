#include <stdio.h>

int main() {
    float diem;

    // Nh?p di?m t? ngu?i dùng
    printf("Nhap diem: ");
    scanf("%f", &diem);

    // Ki?m tra x?p lo?i
    if (diem >= 5) {
        printf("Xep loai: Dat\n");
    } else {
        printf("Xep loai: Khong dat\n");
    }

    return 0;
}

