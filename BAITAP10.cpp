#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}

