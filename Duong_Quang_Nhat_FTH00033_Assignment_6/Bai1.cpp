#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	
	for(int i=0; i<n; i++){
 		printf("Nhap: %d : ", i);
 		scanf("%d",& mang[i]);
 	}
	
	int total = 0;
	int count = 0;
	
	for (int i = 0;  i < n; i ++){
		if (mang[i] % 2 != 0){
			total += mang[i];
			count ++;
		}
	}
	
	if (count > 0){
		float average = (float)total / count;
		printf("Trung binh cong cac so le trong mang n la: %f \n", average);
	}
	else{
		printf("Khong co so le trong mang. \n");
	}
}
