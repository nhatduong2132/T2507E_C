#include <stdio.h>

int main() {
    int day, month, year;
    int totalDays = 0;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    int t1 = 31, t2 = 28, t3 = 31, t4 = 30, t5 = 31, t6 = 30;
    int t7 = 31, t8 = 31, t9 = 30, t10 = 31, t11 = 30, t12 = 31;
    

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        t2 = 29;
    }

    if (month == 1) {
    	totalDays = 0;	
	}

    if (month == 2) {
    	totalDays = t1;
	}
    if (month == 3) {
    	totalDays = t1 + t2;
	}
    if (month == 4) {
    	totalDays = t1 + t2 + t3;
	}
    if (month == 5) {
    	totalDays = t1 + t2 + t3 + t4;
	}
    if (month == 6) {
    	totalDays = t1 + t2 + t3 + t4 + t5;
	}
    if (month == 7) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6;
	}
    if (month == 8) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6 + t7;
	}
    if (month == 9) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8;
	}
    if (month == 10) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9;
	}
    if (month == 11) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10;
	}
    if (month == 12) {
    	totalDays = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10 + t11;
	}

    totalDays += day;

    printf("Ngay %d/%d/%d la ngay thu %d trong nam.\n", day, month, year, totalDays);

    return 0;
}

