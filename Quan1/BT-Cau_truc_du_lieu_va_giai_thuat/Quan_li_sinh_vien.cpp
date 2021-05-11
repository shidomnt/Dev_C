#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>

//SUBJECTS
struct SUBJECTS
{
    float toan, van, anh;
};

//STUDENTS
struct STUDENTS
{
    char name[50];
    int age;
    SUBJECTS sub;
    char tk[20];
    char mk[20];
};

//CLASS
struct CLASS
{
    STUDENTS hs[24];
};

//MENU
void menu(){
    printf("          PHAN MEM THI TRAC NGHIEM\n");
    printf("********************************************\n");
    printf("1. a");
    printf("2. b");
    printf("3. c");
    printf("4. d");
    printf("5. e");
}

//LOGIN
void login(){
    char tk1[20],mk1[20];
    char tk[]="admin";
    char mk[]="00000";
    printf("\n****** Nhap ten dang nhap va mat khau ******");
    printf("\nTK: "); fflush(stdin);
    scanf("%s", &tk1);
    printf("MK: "); fflush(stdin);
    scanf("%s", &mk1);
    if ( strcmp(tk,tk1)==0 && strcmp(mk,mk1)==0)
    {
        system("cls");
        menu();
    } else {
        char c;
        printf("\n--> Sai ten dang nhap hoac mat khau !");
        printf("\nBam phim Enter de dang nhap lai & phim 0 de thoat --");
        c= getchar(); if(c=='0') exit(0); 
        system("cls");
        login();
    }
    
}

int main(){
    system("cls");
    login();
    CLASS lop[4];
    return 0;
}