#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n); 

    int x1 = 0; 
    int x2 = 1; 
    int x3;     

    if (n == 0) {
        printf("F%d = %d\n", n, x1);
    } 
    else if (n == 1) {
        printf("F%d = %d\n", n, x2);
    } 
    
    else{
    	int i = 2;
    	while (i <= n) {
    		x3 = x1 + x2;
    		x1 = x2;
    		x2 = x3;
    		i ++;
		}
	printf("F%d = %d \n", n,x3);
	}
    
    return 0;
}

