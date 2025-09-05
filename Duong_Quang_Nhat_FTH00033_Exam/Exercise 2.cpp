#include <stdio.h>
#include <math.h>

int isPrime(int x){
	if (x < 2){
		return 0;
	}
	
	for(int i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		printf("Input index %d: ", i);
		scanf("%d", & arr[i]);
	}
	
	int snt = 0; 
	
	for(int i = 0; i < n; i ++){
		if (isPrime(arr[i])){
			printf("Prime number in array: %d\n", arr[i]);
			snt ++;
		}
	}
	
	if(snt == 0){
		printf("No prime number");
	}
	
	else{
		printf("An array has %d prime numbers.", snt);
		
	}
}
