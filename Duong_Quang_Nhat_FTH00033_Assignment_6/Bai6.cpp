#include <stdio.h>

int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mang[n];
	int sdnn = 0;
	
	for (int i = 0; i < n; i ++ ){
		printf("Nhap index %d: ", i);
		scanf("%d", & mang[i]);
	}
	
	int curlen = 0;
	int maxlen = 0;
	
	for (int i = 0; i < n; i ++){
		if (mang[i] > 0) {
			curlen ++;
			if (curlen > maxlen){
				maxlen = curlen;
			}
		}
		else{
			curlen = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat la: %d", maxlen);
}
