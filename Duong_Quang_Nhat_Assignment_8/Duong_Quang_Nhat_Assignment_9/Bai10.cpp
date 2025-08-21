#include <stdio.h>

void dnm(int mang[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = mang[left];
        mang[left] = mang[right];
        mang[right] = temp;
        left++;
        right--;
    }
}


int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int mang[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap index %d: ", i);
        scanf("%d", &mang[i]);
    }

    dnm(mang, n);

    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
    
}
