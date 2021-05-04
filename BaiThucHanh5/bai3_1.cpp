#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct sinh_vien{
    char ho_ten[30];
    int diem_1;
    int diem_2;
};
void nhap(struct sinh_vien a[],int n){
    for(int i=0;i<n;i++){
        printf("======Nhap sinh vien thu %d======",i+1);
        printf("\nNhap ho va ten: ");
        fflush(stdin);
        scanf("%[^\n]",a[i].ho_ten);
        printf("\nNhap diem mon thi thu nhat: ");
        scanf("%d",&a[i].diem_1);
        printf("\nNhap diem mon thi thu hai: ");
        scanf("%d",&a[i].diem_2);
    }
}
void xuat(struct sinh_vien a[],int n){
    printf("\nHo va ten \t\t\tDiem mon thu nhat\tDiem mon thu hai\n");
    for(int i=0;i<n;i++){
        printf("%-20s%20d%25d\n",a[i].ho_ten,a[i].diem_1,a[i].diem_2);
    }
}
int datyeucau(struct sinh_vien a[],int n){
    int dem=0;
    float dtb;
    for(int i=0;i<n;i++){
        dtb=(a[i].diem_1+a[i].diem_2)/2.0;
        if(dtb>=5){
            if(a[i].diem_1>3&&a[i].diem_2>3)
            dem++;
        }
    }
    return dem;
}
int main(){
    int n;
    do{
        printf("Nhap so luong sinh vien(>=5 va <=20): ");
        scanf("%d",&n);
        if(n<5||n>20)
        printf("Khong hop le!Nhap lai!\n");
    }
    while(n<5||n>20);
    struct sinh_vien sv[n];
    nhap(sv,n);
    xuat(sv,n);
    printf("\nSO SINH VIEN DAT YEU CAU LA: %2d",datyeucau(sv,n));
    getch();
}