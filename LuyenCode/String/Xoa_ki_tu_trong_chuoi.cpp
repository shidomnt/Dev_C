#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Ham xoa ki tu:
//String la chuoi can xoa
//length la do dai chuoi
//val la ki tu can xoa
void edelete(char *string, int *length, char val){
    while(true){
        char *ptr = strchr(string,val);
        if(ptr==NULL)
        break;
        while(*ptr!=NULL){
            *ptr=*(ptr+1);
            ptr++;
        }
        length--;
    }
}
int main(){
    char *string;
    string = (char*) malloc(100*sizeof(char));
    //Nhap chuoi
    scanf("%[^\n]",string);
    int length=strlen(string);
    char x;
    fflush(stdin);
    //Nhap ki tu muon xoa
    scanf("%c",&x);
    edelete(string,&length,x);
    puts(string);
    return 0;
}