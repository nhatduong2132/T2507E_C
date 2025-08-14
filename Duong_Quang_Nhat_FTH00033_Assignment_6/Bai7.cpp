# include<stdio.h>

int main (){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	
	for(int i = 0; i < n; i++){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	
	int total = 0;
	int btotal = 0;
	
	for (int i = 0; i < n; i++){
		if (mang[i] > 0){

			total += mang[i];
			if (btotal < total){
				btotal = total;
			}
		}
		
		else{
			total = 0;
		}
	}
	printf("Chuoi so duong co tong lon nhat la: %d", btotal);
}
