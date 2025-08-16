#include <stdio.h>

int main () {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int mang[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap index %d: ", i);
        scanf("%d", &mang[i]);
    }

    int x = mang[0];
    if (x < 0) {
		x = -x;
	} 

    for (int i = 1; i < n; i++) {
        int val = mang[i];
        if (val < 0) {
        	val = -val;	
		} 
        if (val > x) {
            x = val;
        }
    }

    printf("Doan [-%d , %d] tren truc so nguyen chua tat ca gia tri trong mang\n", x, x);

    return 0;
}

