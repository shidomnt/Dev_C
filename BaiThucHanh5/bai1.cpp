#include<stdio.h>
#include<conio.h>
#include<string.h>
struct sinh_vien{                     //1.Doi luong luu tru la sinh vien
    char ma_sv[10];                     //Ma sinh vien
    char ho_ten[20];                    //Ho va ten
    float diem_thi;                     //Diem thi
};
//2.Chuong trinh thuc hien nhap/xuat du lieu sinh vien
//3.Chuong trinh cho phep nhap va hien thi thong tin cua 3 sinh vien
int main(){                             
    struct sinh_vien sv[3];
    for(int i=0;i<3;i++){
        printf("\nNhap thong tin cho sinh vien thu %d",i+1);
        printf("\nMa so sinh vien: ");
        fflush(stdin);
        //scanf("%[^\n]",sv[i].ma_sv);
        gets(sv[i].ma_sv);
        printf("\nHo va ten: ");
        fflush(stdin);
        //scanf("%[^\n]",sv[i].ho_ten);
        gets(sv[i].ho_ten);
        printf("\nDiem thi: ");
        scanf("%f",&sv[i].diem_thi);
    }
    printf("\nThong tin ve cac sinh vien");
    for(int i=0;i<3;i++){
        printf("\nSinh vien thu %d: ",i+1);
        printf("%-10s%-20s %-3.1f",sv[i].ma_sv,sv[i].ho_ten,sv[i].diem_thi);
    }
    getch();
}