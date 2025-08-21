#include <stdio.h>

int findMin (int arr[], int n){
	int min = arr[0];
	for(int i = 0; i < n; i ++ ){
		if (min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    int result;
    result = findMin(arr, n);
    
    printf("Phan tu lon nhat trong mang la: %d", result);
}
