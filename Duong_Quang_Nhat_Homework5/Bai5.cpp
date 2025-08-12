#include <stdio.h>

int main () {
	
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}
	while(n <= 0);
	
	int max_digit;
	
	
	for ( n ; n > 0; n /= 10){
		int digit = n % 10;
		if (digit > max_digit){
			max_digit = digit;
		} 
	}
	printf("Chu so lon nhat cua n la: %d", max_digit);
	
}
