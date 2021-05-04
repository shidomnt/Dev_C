#include<stdio.h>
#include<conio.h>
#include<string.h>
int demtu(char str[]){
    int dem=1;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '&&str[i+1]!=' ')
        dem++;
    }
    return dem;
}
int main(){
    char str[40];
    printf("Nhap xau: ");
    do{
        gets(str);
        if(strlen(str)>40)
        printf("Xau qua dai!Nhap lai!\n");
        if(strlen(str)==0)
        printf("Xau qua ngan!Nhap lai!\n");
    }
    while(strlen(str)>40||strlen(str)==0);
    printf("Xau ky tu %s co %3d tu",str,demtu(str));
    getch();
}