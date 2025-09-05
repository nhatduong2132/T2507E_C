#include <stdio.h>
#include <string.h>

int main(){
	char s1[100];
	printf("Nhap string s1: ");
	scanf("%s", s1);
	
	char s2[100];
	printf("Nhap string s2: ");
	scanf("%s", s2);
	
	char *shorter, *longer;
	
	if(strlen(s1) < strlen(s2)){
		shorter = s1;
		longer = s2;
	}
	else{
		shorter = s2;
		longer = s1;
	}
	
	if (strstr(longer, shorter) != NULL) {
		printf("Chuoi ngan hon nam trong chuoi dai hon\n");
	}
	else{
		printf("Chuoi ngan hon khong nam trong chuoi dai hon \n");
	}
	
	return 0;
		
	
}
