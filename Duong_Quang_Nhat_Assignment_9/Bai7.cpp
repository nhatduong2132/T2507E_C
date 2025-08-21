#include <stdio.h>

int findMax (int arr[], int n){
	int max = arr[0];
	for(int i = 0; i < n; i ++ ){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	return max;
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
    result = findMax(arr, n);
    
    printf("Phan tu lon nhat trong mang la: %d", result);
}
