#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct hang_hoa{
    char ten_hang[30];
    int so_luong;
    float don_gia;
};
void nhap(struct hang_hoa a[],int n){
    for(int i=0;i<n;i++){
        printf("======Nhap mat hang thu %d======",i+1);
        printf("\nNhap ten hang: ");
        fflush(stdin);
        scanf("%[^\n]",a[i].ten_hang);
        printf("\nNhap so luong: ");
        scanf("%d",&a[i].so_luong);
        printf("\nNhap don gia: ");
        scanf("%f",&a[i].don_gia);
    }
}
void xuat(struct hang_hoa a[],int n){
    printf("\nTen mat hang\t\t\tSo luong\t\tDon gia\n");
    for(int i=0;i<n;i++){
        printf("%-20s%20d%25.1f\n",a[i].ten_hang,a[i].so_luong,a[i].don_gia);
    }
}
void sssoluong(struct hang_hoa a[],int n,int val){
    printf("Ten mat hang\t\tSo luong\n");
    for(int i=0;i<n;i++){
        if(a[i].so_luong<val)
        printf("%-30s %d\n",a[i].ten_hang,a[i].so_luong);
    }
}
void ssgiatri(struct hang_hoa a[],int n,float val){
    printf("Ten mat hang\t\t\tSo luong  Don gia  Gia tri\n");
    float giatri;
    for(int i=0;i<n;i++){
        giatri=a[i].so_luong*a[i].don_gia;
        if(giatri>val)
        printf("%-30s%8d%8.1f%12.2f\n",a[i].ten_hang,a[i].so_luong,a[i].don_gia,giatri);
    }
}
int main(){
    int n;
    do{
        printf("Nhap so luong mat hang(>=10 va <=20): ");
        scanf("%d",&n);
        if(n<10||n>20)
        printf("Khong hop le!Nhap lai!\n");
    }
    while(n<10||n>20);
    struct hang_hoa hanghoa[n];
    nhap(hanghoa,n);
    xuat(hanghoa,n);
    int ssslg;
    printf("\nNhap so luong ss: ");
    scanf("%d",&ssslg);
    sssoluong(hanghoa,n,ssslg);
    float ssval;
    printf("\nNhap gia tri ss: ");
    scanf("%f",&ssval);
    ssgiatri(hanghoa,n,ssval);
    getch();
}