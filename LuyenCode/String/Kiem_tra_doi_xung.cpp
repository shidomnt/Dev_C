#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int length(char string[]){
    int i;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}
bool kiemtradx(char string[]){
    int n=length(string);
    for(int i=0;i<=n/2;i++){
        if(string[i]!=string[n-i-1])
        return false;
    }
    return true;
}
int main(){
    char string[100];
    gets(string);
    if(kiemtradx(string)) printf("Chuoi doi xung!");
    else printf("Chuoi khong doi xung!");
    return 0;
}