#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Account
{
    char *nickname;
    char *password;
}acc;

int kiemtra(acc *taikhoan ,int n, acc tk){
    for(int i=0;i<n;i++){
        if(!strcmp(tk.nickname,taikhoan[i].nickname)){
            if(!strcmp(tk.password,taikhoan[i].password))
                return 0;
        }
    }
    return -1;
}
int main() {
    int n=3;
    acc *taikhoan;
    taikhoan = (acc*) malloc(n*sizeof(acc));
    FILE* fin;
    fin = fopen("E:/Dev_C/LuyenCode/Structure/Account.txt","a+");
    /*
    for(int i=0;i<n;i++){
        (taikhoan+i)->nickname = (char*) malloc(sizeof(char)*31);
        (taikhoan+i)->password = (char*) malloc(sizeof(char)*31);
        fflush(stdin);
        scanf("%s %s",taikhoan[i].nickname,taikhoan[i].password);
        fprintf(fin,"%20s%20s\n",taikhoan[i].nickname,taikhoan[i].password);
    }
    */
    
    for(int i=0;i<n;i++){
        (taikhoan+i)->nickname = (char*) malloc(sizeof(char)*31);
        (taikhoan+i)->password = (char*) malloc(sizeof(char)*31);
        fscanf(fin,"%20s%20s",(taikhoan+i)->nickname,(taikhoan+i)->password);
    }
    
    acc tk;
    tk.nickname = (char*) malloc(sizeof(char)*31);
    tk.password = (char*) malloc(sizeof(char)*31);
    char check;
    while(true){
        printf("\nNhap ten tai khoan: ");
        fflush(stdin);
        scanf("%s",tk.nickname);
        printf("\nNhap mat khau: ");
        fflush(stdin);
        scanf("%s",tk.password);
        if(kiemtra(taikhoan,n,tk)==-1){
            printf("\nSai tai khoan hoac mat khau!");
            printf("\nThu lai bam 1 / Thoat bam 0 ");
            fflush(stdin);
            check = getch();
            if(check == '0')
            break;
        }
        else{
            printf("\nDang nhap thanh cong!");
            break;
        }
    }
    free(tk.nickname);
    free(tk.password);
    for(int i=0;i<n;i++){
        free((taikhoan+i)->nickname);
        free((taikhoan+i)->password);
    }
    free(taikhoan);
    fclose(fin);
    return 0;
}