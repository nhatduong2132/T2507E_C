#include <stdio.h>

int main () {
    int ngay;
    printf("Nhap ngay: \n");
    scanf("%d", &ngay);

    int thang;
    printf("Nhap thang: \n");
    scanf("%d", &thang);

    int nam;
    printf("Nhap nam: \n");
    scanf("%d", &nam);

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)  {
        if (ngay == 30) {
            ngay = 1;
            thang++;
        } else {
            ngay++;
        }
    }
    else if (thang == 12){
        if (ngay == 31){
            ngay = 1;
            thang = 1;
            nam++;
        } else {
            ngay++;
        }
    }
    else if (thang == 2){
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
            if (ngay == 29){
                ngay = 1;
                thang++;
            } else {
                ngay++;
            }
        } else {
            if (ngay == 28){
                ngay = 1;
                thang++;
            } else {
                ngay++;
            }
        }
    }
    else{
        if (ngay == 31){
            ngay = 1;
            thang++;
        } else {
            ngay++;
        }
    }

    printf("Ngay ke tiep la: %d/%d/%d\n", ngay, thang, nam);
    return 0;
}

