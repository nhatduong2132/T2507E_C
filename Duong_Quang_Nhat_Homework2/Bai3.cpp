#include <stdio.h>

int main () {
	int soTien;
	printf("Nhap so tien can rut:");
	scanf("%d", & soTien);
	
	int to500 = soTien / 500000;
	soTien = soTien % 500000;
	
	int to200 = soTien / 200000;
	soTien = soTien % 200000;
	
	int to100 = soTien / 100000;
	soTien = soTien % 100000;
	
	int to50 = soTien / 50000;
	soTien = soTien % 50000;
	
	int to20 = soTien / 20000;
	soTien = soTien % 20000;
	
	int to10 = soTien / 10000;
	soTien = soTien % 10000;
	
	printf("So tien can rut duoc chia thanh:\n");
	
	if (to500 > 0){
		printf("%d to 500k\n", to500);
	}
	
	if (to200 > 0){
		printf("%d to 200k\n", to200);
	}
	
	if (to100 > 0){
		printf("%d to 100k\n", to100);
	}
	
	if (to50 > 0){
		printf("%d to 50k\n", to50);
	}
	
	if (to20 > 0){
		printf("%d to 20k\n", to20);
	}
	
	if (to10 > 0){
		printf("%d to 10k", to10);
	}
	
}
