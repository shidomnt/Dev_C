#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

void nhap(char arr[]){
    printf("Nhap: ");
    fflush(stdin);
    gets(arr);
}


int main(){
    char arr[100];
    // nhap(arr);
    FILE *file;
    file= fopen("Account.txt", "r");
    fgets(arr,20,(FILE *)file);
    printf("Chuoi: %s", arr);
    fclose(file);
    return 0;
}