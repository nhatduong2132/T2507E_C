#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a = 0;
	int b = 1;
	int c = 1;
	
	while (c <= n) {
		a = b;
		b = c;
		c = a + b;
		
	}
	
	printf("So tiem can duoi voi n thuoc Fibonacci la: %d", b);
}
