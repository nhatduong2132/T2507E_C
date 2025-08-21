#include <stdio.h>

int tongcs (int a){
	
	int total = 0;
	int digit = 0;
	while (a != 0){
		digit = a % 10;
		total += digit;
		a = a / 10;
	}
	return total;
	
}

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d", & n);
	
	while(n < 0){
		printf("Nhap n: ");
		scanf("%d", & n);
	}
	
	
	int kq;
	kq = tongcs(n);
	printf("Tong cac chu so cua %d la: %d", n, kq);	
}
