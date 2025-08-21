#include <stdio.h>

int ucln (int a, int b){
	int result;
	for (int i = 1; (i <= a) && (i <= b); i ++){
		if ((a % i == 0) && (b % i == 0) ) {
			result = i;
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
	kq = ucln(a,b);
	printf("Uoc chung lon nhat cua %d va %d la: %d", a , b , kq);
}
