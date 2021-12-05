#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
/*
    for(int i=strlen(string)-2;i>=0;i--){
        printf("%c",string[i]);
    }
*/
    //fputs(strrev(string),stdout);
    return 0;
}