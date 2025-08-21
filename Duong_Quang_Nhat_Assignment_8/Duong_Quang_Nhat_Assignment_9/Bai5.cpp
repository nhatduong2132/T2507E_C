#include <stdio.h>

int reverse (int x) {
	int rev = 0;
	int digit = 0;
	
	while(x != 0){
		digit = x % 10;
		rev = rev * 10 + digit;
		x = x / 10;
		
	} 
	return rev;
}

int main () {
	int x;
	printf("Nhap x: ");
	scanf("%d", & x);
	
	int result;
	result = reverse(x);
	
	printf("So dao nguoc cua %d la %d", x, result);
	
	
}
