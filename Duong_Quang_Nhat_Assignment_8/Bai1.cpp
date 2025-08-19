#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", & n );
	
	int player[n];
	
	for ( int i = 0 ; i < n ; i ++){
		printf("Nhap index %d: ", i);
		scanf("%d", & player[i]);
	}
	
	int k;
	printf("Nhap so lan xoay trai k: ");
	scanf("%d", & k);
	
	for(int i = 0; i < k; i ++){
		int temp = player[0];
		for (int j = 0; j < n - 1; j++){
			player[j] = player [j+1];
		}
		player [ n-1] = temp;
	}
	
	printf("Mang sau khi xoay trai %d lan: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", player[i]);
    }
    printf("\n");

}
