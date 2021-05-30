#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void Xoa(char s[], int pos,int *length){
    for(int i=pos;i<strlen(s);i++){
        s[i]=s[i+1];
    }
    *length--;
}
void Chuan_hoa(char s[]){
    int i = 0;
    int length = strlen(s);
    while(s[i]==' ')
    Xoa(s,i,&length);
    i=length-1;
    while(s[i]==' '){
        s[i]='\0';
        i--;
    }
    for(i=0;i<length;i++){
        if(s[i]==' '&&s[i+1]==' ')
        Xoa(s,i,&length);
        if((i==0 || s[i-1]==' ')&& (s[i]<122 && s[i]>97))
        s[i]-=' ';
    }
}
int main() {
    char string[100];
    printf("Nhap xau: ");
    fflush(stdin);
    gets(string);
    Chuan_hoa(string);
    puts(string);
    return 0;
}