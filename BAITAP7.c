#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen: ");
    scanf("%d", &n);


    printf("uoc %d la:\n", n);
    for (int i = 1; i <= (n < 0 ? -n : n); i++) { 
        if (n % i == 0) {
            printf("%d ", i); 
        }
    }

    printf("\n");

    return 0;
}
