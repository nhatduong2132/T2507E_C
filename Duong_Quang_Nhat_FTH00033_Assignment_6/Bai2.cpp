#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang [n];
	
	
	for (int i = 0; i < n; i++){
		printf("Nhap so %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	int total = 0;
	int count = 0;
	int average = 0;
	
		
	for (int i = 0; i < n; i ++){
		if (i % 2 == 0){
			if (mang[i] % 2 != 0){
				total += mang[i];
				count ++;
			}
		}
	}
	
	if (count > 0){
		average = total / count;
		printf("Trung binh cong cac so le o vi tri chan trong mang n la: %d", average);
	}
	else {
		printf("Khong co so le trong mang");
	}
}
