#include <stdio.h>

int main() {
    int N;
    
    // Nh?p vào s? N
    printf("Nh?p vào m?t s?: ");
    scanf("%d", &N);
    
    // Ki?m tra s? ch?n hay l?
    if (N % 2 == 0) {
        printf("%d là s? ch?n.\n", N);
    } else {
        printf("%d là s? l?.\n", N);
    }
    
    return 0;
}


