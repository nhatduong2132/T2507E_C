#include <stdio.h>

int main () {
    int n; 
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int x;
    int i = 2;             
    int snt = 1;           
    
    if (n <= 1) {
        printf("Khong phai so nguyen to \n");
    } else {
        while (i * i <= n) {
            x = n % i;
            if (x == 0) {
                snt = 0;   
            }
            i++;
        }
        
        if (snt == 1) {
            printf("Day la so nguyen to\n");
        } else {
            printf("Khong phai so nguyen to\n");
        }
    }

    return 0;
}

