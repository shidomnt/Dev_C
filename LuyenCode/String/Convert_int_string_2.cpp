#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    char string[30];
    int so1,so2,so3;
    fgets(string,sizeof(string),stdin);
    sscanf(string,"%d%d%d",&so1,&so2,&so3);
    printf("%d\n",so1);
    printf("%d\n",so2);
    printf("%d\n",so3);
    return 0;
}