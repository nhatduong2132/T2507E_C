#include <stdio.h>

int main () {
	int n;
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	} while ( n <= 0);
	
	int allOdd = 1;
	
	
	for (n; n > 0; n /= 10){
		int digit = n % 10;
		if (n % 2 == 0){
			allOdd = 0;
			break;
			}
		}
	
	if (allOdd == 1) {
		printf("So %d co toan chu so le\n", n);
		
	}
	else {
		printf("So %d nguyen duong n khong toan chu so le");
	}
}
	
	
