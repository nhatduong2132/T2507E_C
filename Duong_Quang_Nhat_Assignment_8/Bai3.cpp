#include <stdio.h>

int main ( ) {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int arr[n];
	for (int i = 0; i < n; i ++){
		printf("Nhap index %d: \n", i);
		scanf("%d", & arr[i] );
	}
	
	int maxSoFar = arr[0];
	int maxEndingHere = arr[0];
	
	
	for ( int i = 1; i< n; i ++){
		if (maxEndingHere + arr[i] > arr[i]){
			maxEndingHere += arr[i];
		}
		else {
			maxEndingHere = arr[i];
		}
		
		if (maxEndingHere > maxSoFar) {
			maxSoFar = maxEndingHere;
		}
	}
	
	printf("Tong lon nhat cua day con lien tiep = %d\n", maxSoFar);

    return 0;
}
