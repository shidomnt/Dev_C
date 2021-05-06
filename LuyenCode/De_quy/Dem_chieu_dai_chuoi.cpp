#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int length(char *a){
    if(*a=='\0')
    return 0;
    else
    return 1 + length(a+1);
}
int main(){
    char *string;
    string=(char*) malloc(100*sizeof(char));
    scanf("%[^\n]",string);
    printf("\nLength= %d\nString: %s",length(string),string);
    return 0;
}