#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define HB1 "800000"
#define HB2 "750000"
#define HB3 "700000"
typedef struct Sinh_vien{
    int TT;
    char HTEN[30];
    char MASV[15];
    float D1;
    float D2;
    float D3;
    float DTB;
    char HB[10];
}SV;
float Trung_binh(float a, float b ,float c){
    return (a+b+c)/3;
}
void Nhap(SV a[],int size){
    for(int i=0;i<size;i++){
        system("cls");
        puts("====NHAP THONG TIN SINH VIEN====");
        printf("Sinh vien thu %d\n",i+1);
        a[i].TT=i+1;
        puts("\nNhap Ho ten: ");
        fflush(stdin);
        gets(a[i].HTEN);
        puts("\nNhap MSSV: ");
        fflush(stdin);
        gets(a[i].MASV);
        puts("\nNhap diem: ");
        scanf("%f %f %f",&a[i].D1,&a[i].D2,&a[i].D3);
        a[i].DTB = Trung_binh(a[i].D1,a[i].D2,a[i].D3);
        if(a[i].DTB>=9)
        strcpy(a[i].HB,HB1);
        else if(a[i].DTB >=8)
        strcpy(a[i].HB,HB2);
        else if(a[i].DTB >=7)
        strcpy(a[i].HB,HB3);
    }
}
void Ghi(SV a[],int size){
    FILE *p = fopen("E:/thongtinsv.txt","w");
    for(int i=0;i<size;i++){
        fprintf(p,"%-6d%-20s%-10s%-7.1f%-7.1f%-7.1f%-7.1f%-10s\n",
        a[i].TT,a[i].HTEN,a[i].MASV,a[i].D1,a[i].D2,a[i].D3,a[i].DTB,a[i].HB);
    }
    fclose(p);
    puts("\nGhi file thanh cong!\nBam phim bat ki de thoat...");
}
void Doc(){
    FILE *p = fopen("E:/thongtinsv.txt","r");
    SV a;
    while(!feof(p)){
        fscanf(p,"%6d%20s%10s%7.1f%7.1f%7.1f%7.1f%10s\n",
        &a.TT,a.HTEN,a.MASV,&a.D1,&a.D2,&a.D3,&a.DTB,a.HB);
        printf("%-6d%-20s%-10s%-7.1f%-7.1f%-7.1f%-7.1f%-10s\n",
        a.TT,a.HTEN,a.MASV,a.D1,a.D2,a.D3,a.DTB,a.HB);
    }
    fclose(p);
}
int main() {
    //int m;
    //scanf("%d",&m);
    //SV a[m];
    //Nhap(a,m);
    //Ghi(a,m);
    Doc();
    getch();
    return 0;
}