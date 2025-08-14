#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	int sdnn = 0;
	
	for (int i = 0; i < n; i ++ ){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	for (int i = 0; i < n; i ++){
		if (mang[i] > 0) {
			sdnn = mang[i];
			break;
		} 
	}
	printf("So duong nho nhat la: %d", sdnn);
}
