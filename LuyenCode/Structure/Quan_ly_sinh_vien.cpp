/*
Nhập vào một danh sách sinh viên, 
mỗi sinh viên bao gồm 
*mã sinh viên, 
*họ tên, 
*giới tính, 
*năm sinh, 
*điểm trung bình các môn.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
typedef struct sinh_vien{
    char id[15];
    char name[30];
    char sex[10];
    int birth_year;
    float mark_average;
}SV;
void nhap(SV *a,int n){
    puts("\n======NHAP THONG TIN SINH VIEN======");
    for(int i=0;i<n;i++){
        printf("\nNhap sinh vien thu %d: ",i+1);
        puts("\nNhap ma sinh vien: ");
        scanf("%[^\n]",a[i].id);
        puts("\nNhap ten: ");
        scanf("%[^\n]",a[i].name);
        puts("\nNhap gioi tinh: ");
        scanf("%[^\n]",a[i].sex);
        puts("\nNhap nam sinh: ");
        scanf("%d",a[i].birth_year);
        puts("\nNhap diem trung binh: ");
        scanf("%f",a[i].mark_average);
    }
}
void xuat(SV *a,int n){
    printf("\n====== THONG TIN SINH VIEN ======");
    for(int i=0;i<n;i++){
        printf("\n------- Sinh vien thu %d --------",i+1);
        printf("\n\t Ma sinh vien: %s",a[i].id);
        printf("\n\t Ten: %s",a[i].name);
        printf("\n\t Gioi tinh: %s",a[i].sex);
        printf("\n\t Nam sinh: %d",a[i].birth_year);
        printf("\n\t Diem trung binh: %.2f",a[i].mark_average);
    }
    printf("\n=================================");
}
//Sap xep theo nam sinh tang dan
void sort_by_birth_year(SV *a,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        SV temp=a[j+1];
        while(j>=0&&temp.birth_year<a[j].birth_year){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
//Chen them nhung van dam bao nam sinh tang dan
void add(SV *a,int *n, SV val){
    int pos;
    for(pos=0;pos<*n;pos++){
        if(a[pos].birth_year > val.birth_year){
            pos--;
            break;
        }
    }
    for(int i=*n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    n++;
}
//Loc sinh vien diem kem
void low_mark(SV *a, int n, float condition){
    for(int i=0;i<n;i++){
        if(a[i].mark_average<condition){
            printf("\n\t Ma sinh vien: %s",a[i].id);
            printf("\n\t Ten: %s",a[i].name);
            printf("\n\t Gioi tinh: %s",a[i].sex);
            printf("\n\t Nam sinh: %d",a[i].birth_year);
            printf("\n\t Diem trung binh: %.2f",a[i].mark_average);
            puts("\n");
        }
    }
}
//Tao 2 danh sach nam , nu rieng
void filter_by_sex(SV *source,int n,SV *male, int *m,SV *female, int *f){
    m=0,f=0;
    for(int i=0;i<n;i++){
        if(!strcmp(source[i].sex,"nam")){
            male[*m]=source[i];
            (*m)++;
        }
        else{
            female[*f]=source[i];
            (*f)++;
        }
    }
}
int main() {

    return 0;
}