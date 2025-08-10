#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int x = 0;
	int y = 0;
	
	while (x < n){
		if ((x % 2 == 0) && (x %3 == 0)){
		y = x;
		}
		x++;
		 
	}
	printf("%d",y);
	
}
