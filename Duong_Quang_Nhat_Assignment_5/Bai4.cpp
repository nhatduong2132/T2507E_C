#include <stdio.h>

int main () {
	int n;
	
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		
	}
	while(n <= 0);
	
	int temp;
	
	for (temp = n; temp > 0; temp /= 10){
		if (temp / 10 == 0){
			break;
		}
	}
	printf("Chu so dau tien cua n la: %d", temp);
	
}
