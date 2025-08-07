#include <stdio.h>

int main () {
	float x;
	printf("Nhap gia tri mua hang:");
	scanf("%d", &x);
	
	float d;
	
	if (x >= 500){
		d = 0.1;
		x = x - (x*d);
		printf("So tien phai tra: %d", x);
	}
	
	
	else if (x >= 200 && x <= 499){
		d = 0.05;
		x = x - (x*d);
		printf("So tien phai tra: %d", x);
	}
	else{
		printf("So tien phai tra %d", x);	
	}
}
