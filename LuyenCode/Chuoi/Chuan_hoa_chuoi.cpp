#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    gets(string);
    int length=strlen(string);
    //xoa ki tu trang thua
    while(string[0]==32){
        for(int i=0;i<length;i++){
            string[i]=string[i+1];
        }
        length--;
    }
    for(int i=0;i<length;i++){
        while(string[i]==32){
            if(string[i+1]==32){
                for(int j=i;j<length;j++){
                string[j]=string[j+1];
            }
            length--;
            }
            else break;
        }
    }
    //dem so tu trong chuoi
    int dem=1;
    for(int i=0;i<length;i++){
        if(string[i]==32&&string[i+1]!=32) dem++;
    }
    //chi viet hoa chu dau tien cua moi tu
    strlwr(string);
    if(!(string[0]>=65&&string[0]<=90)) string[0]-=32;
    for(int i=1;i<length;i++)
    if(string[i]==32){
        if(!(string[i+1]>=65&&string[+1]<=90))
        string[i+1]-=32;
    }
    printf("\nSau khi chuan hoa: %s",string);
    return 0;
}