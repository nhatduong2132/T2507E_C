#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int rev = 0;
	int digit = 0;
	int original = n;
	
	
	while (n != 0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n/10;	
	}
	
	printf("So dao nguoc cua %d la: %d", original, rev);
}
