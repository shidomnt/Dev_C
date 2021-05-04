#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    char string2[100];
    scanf("%[a-z A-Z 0-9]",string);
    printf("%s\b\b\b",string);
    return 0;
}