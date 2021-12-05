#include<stdio.h>
#include<conio.h>
#include<string.h>
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
    printf("%s\n",str);
    
    //Test con tro
/*
    int length=strlen(str);
    for(int i=1;i<=length;i++)
    printf("%c",*(str+length-i));
*/
    //printf("%s",strrev(str));
    getch();
}