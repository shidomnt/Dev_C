#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *str;
    int a;
    str=(char*) malloc(100*sizeof(str));
    FILE *ptr;
    ptr=fopen("E:\\docghifile.txt","r");
    fscanf(ptr,"%[^\0]",str);
    printf("%s",str);
    free(str);
    fclose(ptr);
}