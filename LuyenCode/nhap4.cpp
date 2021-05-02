#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    printf("%s",strlwr(str));
    return 0;
}