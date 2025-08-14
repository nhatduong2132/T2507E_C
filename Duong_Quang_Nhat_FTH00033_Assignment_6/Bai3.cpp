#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	
	for (int i = 0; i < n; i ++ ){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d", & x);
	
	for (int i = 0; i < n; i++){
		if (x == mang[i]){
			printf("x co trong mang");
		}
		
	}
	
}
