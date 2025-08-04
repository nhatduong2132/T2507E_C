#include <stdio.h>

int main() {
    float x;
    printf("Nhap so kWh tieu thu: ");
    scanf("%f", &x);

    // Don gia theo bac
    float a = 1.678;   // <=50
    float b = 1.734;   // 51-100
    float c = 2.014;   // 101-200
    float d = 2.536;   // >200

    if (x <= 50) {
        float td1 = x * a;
        printf("Tien dien la: %.2f VND\n", td1);
    } 
    else if (x > 50 && x <= 100) {
        float td2 = 50 * a + (x - 50) * b;
        printf("Tien dien la: %.2f VND\n", td2);
    } 
    else if (x > 100 && x <= 200) {
        float td3 = 50 * a + 50 * b + (x - 100) * c;
        printf("Tien dien la: %.2f VND\n", td3);
    } 
    else {
        float td4 = 50 * a + 50 * b + 100 * c + (x - 200) * d;
        printf("Tien dien la: %.2f VND\n", td4);
    }

    return 0;
}

