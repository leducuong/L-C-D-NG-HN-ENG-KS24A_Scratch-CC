#include <stdio.h>

int main() {
    int N;
    
    // Nh?p v�o s? N
    printf("Nh?p v�o m?t s?: ");
    scanf("%d", &N);
    
    // Ki?m tra s? ch?n hay l?
    if (N % 2 == 0) {
        printf("%d l� s? ch?n.\n", N);
    } else {
        printf("%d l� s? l?.\n", N);
    }
    
    return 0;
}


