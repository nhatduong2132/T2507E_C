#include <stdio.h>

int bcnn(int a, int b) {
	int result;
	for(int i = 1; i <= (a*b); i++ ){
		if ((i % a == 0) && (i % b == 0)){
			result = i;
			break;
		}
	}
	return result;
}

int main() {
	int a;
	printf("Nhap a: ");
	scanf("%d", & a);
	
	int b;
	printf("Nhap b: ");
	scanf("%d", & b);
	
	int kq;
	kq = bcnn(a,b);
	printf("Boi chung nho nhat cua %d va %d la: %d", a , b , kq);
}
