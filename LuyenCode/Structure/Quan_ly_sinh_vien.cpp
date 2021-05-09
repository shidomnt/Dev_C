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
    if(n==1){
        puts("\n======NHAP THONG TIN SINH VIEN MOI======");
        for(int i=0;i<n;i++){
            printf("\nNhap ma sinh vien: ");
            fflush(stdin);
            scanf("%[^\n]",a[i].id);
            printf("\nNhap ten: ");
            fflush(stdin);
            scanf("%[^\n]",a[i].name);
            printf("\nNhap gioi tinh: ");
            fflush(stdin);
            scanf("%[^\n]",a[i].sex);
            printf("\nNhap nam sinh: ");
            fflush(stdin);
            scanf("%d",&a[i].birth_year);
            printf("\nNhap diem trung binh: ");
            fflush(stdin);
            scanf("%f",&a[i].mark_average);
            puts("\n");
        }
    }
    else{
        puts("\n======NHAP THONG TIN SINH VIEN======");
        for(int i=0;i<n;i++){
            printf("\nNhap sinh vien thu %d: ",i+1);
            fflush(stdin);
            printf("\nNhap ma sinh vien: ");
            scanf("%[^\n]",a[i].id);
            fflush(stdin);
            printf("\nNhap ten: ");
            scanf("%[^\n]",a[i].name);
            fflush(stdin);
            printf("\nNhap gioi tinh: ");
            scanf("%[^\n]",a[i].sex);
            fflush(stdin);
            printf("\nNhap nam sinh: ");
            scanf("%d",&a[i].birth_year);
            fflush(stdin);
            printf("\nNhap diem trung binh: ");
            scanf("%f",&a[i].mark_average);
            puts("\n");
        }   
    }
}
void xuat(SV *a,int n){
    printf("\n====== THONG TIN SINH VIEN ======");
    for(int i=0;i<n;i++){
        printf("\n------- Sinh vien thu %d --------",i+1);
        printf("\n\tMa sinh vien: %s",a[i].id);
        printf("\n\tTen: %s",a[i].name);
        printf("\n\tGioi tinh: %s",a[i].sex);
        printf("\n\tNam sinh: %d",a[i].birth_year);
        printf("\n\tDiem trung binh: %.2f",a[i].mark_average);
    }
    printf("\n=================================\n");
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
    if(val.birth_year<a[0].birth_year)
    pos=0;
    else if(val.birth_year>a[(*n)-1].birth_year)
    pos=(*n);
    else{
        for(pos=0;pos<(*n);pos++){
        if(a[pos].birth_year > val.birth_year){
            break;
        }
    }
    }
    for(int i=(*n);i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=val;
    (*n)++;
}
//Loc sinh vien diem kem
void low_mark(SV *a, int n, float condition){
    printf("\n====== DANH SACH SINH VIEN DIEM KEM ======\n");
    for(int i=0;i<n;i++){
        if(a[i].mark_average<condition){
            printf("\n\tMa sinh vien: %s",a[i].id);
            printf("\n\tTen: %s",a[i].name);
            printf("\n\tGioi tinh: %s",a[i].sex);
            printf("\n\tNam sinh: %d",a[i].birth_year);
            printf("\n\tDiem trung binh: %.2f",a[i].mark_average);
            printf("\n");
        }
    }
    printf("\n==========================================\n");
}
//Tao 2 danh sach nam , nu rieng
void filter_by_sex(SV *source,int n,SV *male, int *m,SV *female, int *f){
    (*m)=0,(*f)=0;
    for(int i=0;i<n;i++){
        if(!strcmp(source[i].sex,"nam")){
            male[(*m)]=source[i];
            (*m)++;
        }
        else{
            female[(*f)]=source[i];
            (*f)++;
        }
    }
}
void adelete(SV *a,int *n,int pos){
    for(int i=pos;i<(*n);i++){
        a[i]=a[i+1];
    }
    (*n)--;
}
void ghepdoi(SV *male, int m,SV *female, int f){
    puts("\n=========== Ghep Doi ===========");
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<f;j++){
            if(male[i].birth_year<=female[j].birth_year){
                printf("\t%8s - %-8s\n",male[i].name,female[j].name);
                adelete(female,&f,j);
            }
        }
    }
    puts("\n================================");
}
int main() {
    SV list_of_students[100];
    int n;
    while(true){
        system("cls");
        printf("=========================CHUONG TRINH QUAN LY SINH VIEN=========================");
        printf("\n\t\t1.\tNhap them sinh vien");
        printf("\n\t\t2.\tLoc ra sinh vien diem kem");
        printf("\n\t\t3.\tGhep doi sinh vien <3");

    }




    
    printf("\nNhap so luong sinh vien: ");
    scanf("%d",&n);
    nhap(list_of_students,n);
    sort_by_birth_year(list_of_students,n);
    xuat(list_of_students,n);
    SV extra;
    nhap(&extra,1);
    add(list_of_students,&n,extra);
    xuat(list_of_students,n);
    float condititon;
    printf("\nNhap diem yeu cau: ");
    scanf("%f",&condititon);
    low_mark(list_of_students,n,condititon);
    SV male[50] , female[50];
    int m,f;
    filter_by_sex(list_of_students,n,male,&m,female,&f);
    puts("NAM");
    xuat(male,m);
    puts("NU");
    xuat(female,f);
    ghepdoi(male,m,female,f);
    return 0;
}