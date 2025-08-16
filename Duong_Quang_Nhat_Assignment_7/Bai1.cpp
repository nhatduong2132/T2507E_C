#include <stdio.h>
#include <stdlib.h>

int main (){
	int n;
	printf("Nhap mang n: ");
	scanf("%d", &n );
	
	int mang[n];
	
	for (int i = 0; i < n; i ++){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	
	int maxDiff = abs(mang[0]- x);
	int result = mang[0];
	
	for (int i = 1; i < n; i++){
		int diff = abs(mang[i]-x);
		if (diff > maxDiff){
			maxDiff = diff;
			result = mang[i];
		}
	}
	
	printf("Gia tri xa %d nhat la: %d", x, result);
	
	return 0;
	
	
}
