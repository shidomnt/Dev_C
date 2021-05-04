#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%[\n]",string);
    printf("%s\n",string);
    return 0;
}