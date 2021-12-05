#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
const int max = 100;
struct SinhVien
{
    char hoten[30];
    char gioitinh[5];
    char lop[10];
    float DTB;
};

struct List
{
    struct SinhVien Data[max];
    int Length;
};

typedef List List;
void MakeNull_List(List *);
int Empty_List(List *);
int Full_List(List *);
void NhapDS(List *);
void InDS(List *);
void Search_Name(List *);
void Search_DTB(List *);
void Sort_Name(List *);
void Sort_DTB(List *);

int main()
{
    List *L = (List *)malloc(sizeof(List));
    MakeNull_List(L);
    NhapDS(L);
    InDS(L);
    Search_Name(L);
    Search_DTB(L);
    Sort_Name(L);
    puts("\nSX ten");
    InDS(L);
    Sort_DTB(L);
    puts("\nSX DTB");
    InDS(L);
    return 0;
}

void MakeNull_List(List *L)
{
    L->Length = 0;
}
int Empty_List(List *L)
{
    if (L->Length == 0)
        return 1;
    else
        return 0;
}
int Full_List(List *L)
{
    if (L->Length == max)
        return 1;
    else
        return 0;
}
void NhapDS(List *L)
{
    do
    {
        printf("Nhap so phan tu: (n <= %d)\n", max);
        scanf("%d", &L->Length);
    } while (L->Length > max);
    for (int i = 0; i < L->Length; i++)
    {
        printf("\nSinh Vien thu %d", i + 1);
        fflush(stdin);
        printf("\nNhap ho va ten: ");
        gets(L->Data[i].hoten);
        fflush(stdin);
        printf("\nNhap gioi tinh: ");
        gets(L->Data[i].gioitinh);
        fflush(stdin);
        printf("\nNhap lop: ");
        gets(L->Data[i].lop);
        fflush(stdin);
        printf("\nNhap DTB: ");
        scanf("%f", &L->Data[i].DTB);
    }
}
void InDS(List *L)
{
    printf("\n%30s%10s%10s%10s", "Ho va ten", "Gioi tinh", "Lop", "Diem TB");
    for (int i = 0; i < L->Length; i++)
    {
        printf("\n%30s%10s%10s%10.2f", L->Data[i].hoten, L->Data[i].gioitinh, L->Data[i].lop, L->Data[i].DTB);
    }
}
void Search_Name(List *L)
{
    char name_search[30];
    int timthay = 0;
    printf("\nNhap ten can tim: ");
    fflush(stdin);
    gets(name_search);
    for (int i = 0; i < L->Length; i++)
    {
        if (!strcmp(L->Data[i].hoten, name_search))
        {   
            timthay = 1;
            printf("\n%30s%10s%10s%10s", "Ho va ten", "Gioi tinh", "Lop", "Diem TB");
            printf("\n%30s%10s%10s%10.2f", L->Data[i].hoten, L->Data[i].gioitinh, L->Data[i].lop, L->Data[i].DTB);
            break;
        }
    }
    if(!timthay)
    puts("Khong tim thay!");
}
void Search_DTB(List *L)
{
    float diem_search;
    printf("\nNhap diem: ");
    scanf("%f", &diem_search);
    for (int i = 0; i < L->Length; i++)
    {
        if (L->Data[i].DTB >= diem_search)
        {
            printf("\n%30s%10s%10s%10s", "Ho va ten", "Gioi tinh", "Lop", "Diem TB");
            printf("\n%30s%10s%10s%10.2f", L->Data[i].hoten, L->Data[i].gioitinh, L->Data[i].lop, L->Data[i].DTB);
        }
    }
}

char *LayTen(char ten[])
{
    int length = strlen(ten);
    char *p;
    for(int i = length ; i >= 0;i--) {
        if(ten[i] == ' ')
        {
            p = &ten[i+1];
            break;
        }
    }
    return p;
}

void Sort_Name(List *L)
{
    for(int i = 0 ; i < L->Length -1;i++){
        for(int j = i + 1; j < L->Length ; j++) {
            if(strcmp(LayTen(L->Data[i].hoten),LayTen(L->Data[i+1].hoten))>0)
            {
                SinhVien temp = L->Data[i];
                L->Data[i] = L->Data[i+1];
                L->Data[i+1] = temp;
            }
        }
    }
}
void Sort_DTB(List *L) {
    for(int i = 0 ; i < L->Length -1;i++){
        for(int j = i + 1; j < L->Length ; j++) {
            if(L->Data[i].DTB < L->Data[i].DTB)
            {
                SinhVien temp = L->Data[i];
                L->Data[i] = L->Data[i+1];
                L->Data[i+1] = temp;
            }
        }
    }
}
