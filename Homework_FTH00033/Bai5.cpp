#include <stdio.h>
#include <math.h>

int main() {
    float a; 
    printf("Nhap a:");
    scanf("%f", &a);
	float b;
	printf("Nhap b:");
    scanf("%f", &b); 
	float c;
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh bac nhat, x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}

