#include <stdio.h>

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", & n);
	
	int x = 1;
	int S = 0;
	
	while (x < n) {
		if ((n % x) == 0){
			S += x;
		}
		x++;
	}
	if (S == n) {
    printf("%d la so hoan hao.\n", n);
	} 
	else {
    printf("%d khong phai so hoan hao.\n", n);
}

}
