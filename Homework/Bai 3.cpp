#include <stdio.h>

int main(){
	float a;
	
	printf("Nhap a:");
	scanf("%f", &a);
	
	float b;
	printf("Nhap b:");
	scanf("%f", &b);
	
	float c;
	printf("Nhap c:");
	scanf("%f", &c);
	
	if (a + b > c && b + c > a && a + c > b) {
		printf("a,b,c la ba canh tam giac");
	}
	else {
		printf("a, b ,c khong phai ba canh tam giac");
	}
	}
	
