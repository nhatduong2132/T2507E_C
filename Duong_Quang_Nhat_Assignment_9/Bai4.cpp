#include <stdio.h>

int func(int x, int y){
	int result = 1;
	for(int i = 1; i <= y; i++){
		result *= x;
	}
	return result;
		
}

int  main() {
	int x;
	printf("Nhap x: ");
	scanf("%d", & x);
	
	int y;
	printf("Nhap y: ");
	scanf("%d", & y);
	
	int S;
	S = func(x,y);
	printf("S = x^y = %d", S);
}
