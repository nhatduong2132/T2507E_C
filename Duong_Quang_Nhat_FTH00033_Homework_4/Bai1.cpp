#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int x = 0;
	
	while (x < n) {
		if ((x%2) != 0){
			printf("%d \n",x);
		}
		x++; 
	}	
}
