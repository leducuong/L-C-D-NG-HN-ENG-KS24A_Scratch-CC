
#include <stdio.h>

int main() {
    float diem;

    // Nh?p di?m t? ngu?i dùng
    printf("Nhap diem: ");
    scanf("%f", &diem);

    // Ki?m tra và x?p lo?i
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le. Vui long nhap lai (0 <= diem <= 10).\n");
    } else if (diem < 4) {
        printf("Xep loai: Khong dat\n");
    } else if (diem >= 4 && diem <= 6) {
        printf("Xep loai: Trung binh\n");
    } else if (diem > 6 && diem <= 8) {
        printf("Xep loai: Kha\n");
    } else if (diem > 8 && diem <= 9) {
        printf("Xep loai: Gioi\n");
    } else if (diem > 9 && diem <= 10) {
        printf("Xep loai: Xuat sac\n");
    }

    return 0;
}
