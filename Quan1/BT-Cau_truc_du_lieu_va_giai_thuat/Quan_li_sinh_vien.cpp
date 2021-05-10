#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//INFORMATIONS
struct ADMINISTRATOR
{
    char tk[20];
    char mk[20];
};
typedef ADMINISTRATOR admin;

//MENU
void menu(){
    printf("          PHAN MEM THI TRAC NGHIEM\n");
    printf("********************************************\n");
    printf("1. ");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
}

//LOGIN
void login(){
    char tk1[20],mk1[20];
    char tk[20]="admin";
    char mk[20]="00000";
    printf("\n****** Nhap ten dang nhap va mat khau ******");
    printf("\nTK: "); fflush(stdin);
    fgets(tk1, sizeof(tk1), stdin);
    printf("\nMK: "); fflush(stdin);
    fgets(mk1, sizeof(mk1), stdin);
    if ( strcmp(tk,tk1)==0 && strcmp(mk,mk1)==0)
    {
        menu();
    } else {
        printf("\nSai ten dang nhap hoac mat khau !");
        printf("\nVui long dang nhap lai (Bam phim bat ki)");
        getchar(); login();
    }
    
}

int main(){
    login();
    return 0;
}