#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d",  & n );
	
	int arr[n];
	
	for (int i = 0; i < n; i ++){
		printf("Nhap index %d: \n", i);
		scanf("%d", & arr[i] );
	}
	
	int newArr[n];
	int newSize = 0;
	
	for(int i = 0; i < n; i++){
		int flag = 0;
		for (int j = 0; j < newSize; j++){
			if ( arr[i] == newArr[j]){ 
				flag = 1;
				break;
			}
		}
		if (!flag){
			newArr[newSize] = arr[i];
			newSize++;
		}
		
	}
	
	printf("Mang sau khi loai bo phan tu trung lap: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");
}
