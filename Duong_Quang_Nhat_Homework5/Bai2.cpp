#include <stdio.h>

int main () {
	
	int a;
	int b;
	do{
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
	}
	while(a <= 0 || b <= 0);
	
	int ucln;
	
	int bcnn;
	int start;
	
	for (int c = 1; (c <= a) && (c <= b); c++  ){
		if ( (a % c == 0) && (b % c == 0) ) {
			ucln = c;
		}
	}
	printf("Uoc chung lon nhat la: %d\n", ucln);
	
	if (a > b){
		start = a;  
	}
	else {
		start = b;
	}
	
	for (bcnn = start; ;bcnn++){
		if ((bcnn % a == 0) && (bcnn % b == 0)){
			break;
		}
	}
	
	printf("Boi chung nho nhat la: %d \n", bcnn);
	
	
	
}
