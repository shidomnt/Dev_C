#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("Nhap chuoi: ");
    char *str;
    str=(char*) malloc(100*sizeof(str));
    scanf("%[^\n]",str);
    FILE *ptr;
    ptr=fopen("E:\\docghifile.txt","a");
    fprintf(ptr,"\n%s",str);
    free(str);
    fclose(ptr);
}