#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", & n);
	
	int mang[n];
		
	for (int i = 0; i < n; i ++){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	int min = mang[0];
	int max = mang[0];
	
	for (int i = 0; i< n ; i ++){
		int df = mang[i];
		
		if (min > df){
			min = df;
		}
		if (max < df){
			max = df;
		}
		
	}
	
	printf("Doan tren truc so nguyen chua tat ca cac gia tri la [%d , %d]", min,max);
	
	
}
