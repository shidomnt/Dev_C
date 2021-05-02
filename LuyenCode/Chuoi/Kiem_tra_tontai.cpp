#include<stdio.h>
#include<string.h>
int tontai(char string[],char c){
    if(strchr(string,c)==NULL)
    return -1;
    int dem=1;
    for(int i=(strchr(string,c)-string+2);i<strlen(string);i++){
        if(string[i]==c) dem++;
    }
    return dem;
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    printf("Nhap ki tu muon tim: ");
    char c;
    scanf("%c",&c);
    if(tontai(string,c)==-1) printf("Khong tim thay!");
    else printf("Co %d ki tu %c",tontai(string,c),c);
    return 0;
}