#include <stdio.h>

int main () {
	
	int a;
	int b;
	do {
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		
	} while (a >= b);
	
	for (a; a <= b; a++){
		if (a < 2){
			continue;
		}
		int snt = 1;
		
		for (int j = 2; j * j <= a; j++){
			if (a % j == 0){
				snt = 0;
				break;
			}
		}
		
		if (snt == 1){
			printf("%d\n", a);
		}
	}
}
