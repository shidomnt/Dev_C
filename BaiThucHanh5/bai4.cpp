#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct CoVid{
    char ten_quoc_gia[30];
    int so_ca_mac;
    int so_ca_tu_vong;
}virus;
void nhap(virus a[],int n){
    printf("===Nhap thong tin ve hau qua dich CoVid-19===\n");
    for(int i=0;i<n;i++){
        printf("Nhap ten quoc gia: ");
        fflush(stdin);
        scanf("%[^\n]",a[i].ten_quoc_gia);
        printf("Nhap so nguoi bi nhiem: ");
        scanf("%d",&a[i].so_ca_mac);
        printf("Nhap so ca tu vong: ");
        scanf("%d",&a[i].so_ca_tu_vong);
    }
}
void xuat(virus a[],int n){
    printf("TEN QUOC GIA\t\t\tSO CA NHIEM  SO CA TU VONG  TY LE TU VONG\n");
    for(int i=0;i<n;i++){
        float tyle=float(a[i].so_ca_tu_vong/a[i].so_ca_mac);
        printf("%-20s\t\t%8d\t%6d\t\t%5.2f",a[i].ten_quoc_gia,a[i].so_ca_mac,a[i].so_ca_tu_vong,tyle);
    }
}
int main(){
    int n;
    do{
        printf("Nhap so quoc gia bi dich benh CoVid-19: ");
        scanf("%d",&n);
        if(n<10||n>250)
        printf("Khong hop le!Nhap lai!\n");
    }
    while(n<10||n>250);
    virus COVID19[n];
    nhap(COVID19,n);
    xuat(COVID19,n);
    getch();
}