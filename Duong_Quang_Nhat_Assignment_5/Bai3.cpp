#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int tong = 0;

    if (n < 0) {
        n = -n;
    }

    for (int temp = n; temp > 0; temp /= 10) {
        tong += temp % 10; 
    }

    printf("Tong cac chu so la: %d\n", tong);

    return 0;
}

