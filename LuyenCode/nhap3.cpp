#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    char c[]={tran quang ha};
    scanf("%d",&number);
    printf("Size of %d= %d\nSize of %s= %d",number,sizeof(number),c,sizeof(c));
    return 0;
}