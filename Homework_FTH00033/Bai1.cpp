#include <stdio.h>

int main() {
	
	float score;
	printf("Nhap diem hoc sinh: ");
	scanf("%f", & score);

	if (score >= 9.0){
		printf("Hoc sinh xuat sac \n");
	}	else if (score >= 8) {
		printf("Hoc sinh gioi \n");
	}	else if (score >= 6){
		printf("Hoc sinh kha \n");
	}	else if (score >= 5){
		printf("Hoc sinh trung binh \n");
	}	else {
		printf("Hoc sinh yeu \n");
	}
}
