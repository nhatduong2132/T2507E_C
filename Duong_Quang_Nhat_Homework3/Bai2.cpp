#include <stdio.h>

int main() {
    int a, b;
    int da, db;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Bang nhau\n");
    } else {
        if (a < 10) {
            da = 10 - a;
        } else {
            da = a - 10;
        }

        if (b < 10) {
            db = 10 - b;
        } else {
            db = b - 10;
        }

        if (da < db){
        	printf("so %d gan 10 hon",a);
		}
		
		else if (db < da){
        	printf("so %d gan 10 hon",b);
		}
		
		else {
			printf("Bang nhau");
		}
    }

    return 0;
}

