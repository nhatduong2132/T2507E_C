#include <stdio.h>



void sapXepTangDan(int arr[], int n){
	for(int i = 0; i < n - 1; i ++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[ j + 1]){
				int temp = arr[j];
				arr[j] = arr[ j + 1];
				arr[j + 1] = temp;
			}
		}
	}
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
	
	sapXepTangDan(arr,n);
	
	printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
	
}
