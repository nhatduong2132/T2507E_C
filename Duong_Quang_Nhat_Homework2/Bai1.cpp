#include <stdio.h>

int main() {
	int thuNhap;
	printf("Nhap thu nhap cua ban: \n");
	scanf("%d", &thuNhap);
	// 0.05, 0.10, 0.15, 0.20, 0.25, 0.30, 0.35
	
	if (thuNhap <= 11000000) {
		printf("Khong phai dong thue\n");
		
	}
	
	else{
		if (thuNhap > 11000000 && thuNhap <= 18000000) {
			double thue;
			thue = 5000000 * 0.05 + 5000000 * 0.1 + (thuNhap - 10000000)* 0.15;
			printf("Thue cua ban la: %lf\n", thue);
		}
		else if (thuNhap > 18000000 && thuNhap <= 32000000){
			double thue;
			thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + (thuNhap - 18000000)* 0.2;
			printf("Thue cua ban la: %lf\n", thue);
		}
		else if (thuNhap > 32000000 && thuNhap <=52000000) {
			double thue;
			thue = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + 14000000 * 0.2 + (thuNhap - 32000000) * 0.25; 
			printf("Thue cua ban la: %lf\n", thue);
		}
		else if (thuNhap > 52000000 && thuNhap <= 80000000 ) {
			double thue;
			thue = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + 14000000 * 0.2 + 20000000 * 0.25 + (thuNhap - 52000000) * 0.30;
			printf("Thue cua ban la: %lf\n", thue);
		}
		else {
			double thue;
			thue = 5000000 * 0.05 + 5000000 * 0.1 + 8000000 * 0.15 + 14000000 * 0.2 + 20000000 * 0.25 + 30000000 * 0.3 +(thuNhap - 80000000)*0.35;
			printf("Thue cua ban la: %lf\n", thue);
		}
	}
}
