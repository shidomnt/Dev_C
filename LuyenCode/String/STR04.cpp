#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 10000
//Xoa ki tu
void deletechar(char *string,int *length,int pos){
    for(int i=pos;i<(*length);i++){
        string[i]=string[i+1];
    }
    (*length)--;
}
//Loc cac ki tu dac biet con sot lai
void filter(char *string,int *length){
    for(int i=0;i<(*length);i++){
        char c=string[i];
        if((c<48 && c>57)||(c>57 && c<97)||(c<97 && c>122))
            deletechar(string,length,i);
    }
}
//Sap xep chuoi
void sapxep(char *string){
    int length=strlen(string);
    for(int i=0;i<length-1;i++)
        for(int j=i+1;j<length;j++){
            if(string[j]<string[i]){
                char temp=string[j];
                string[j]=string[i];
                string[i]=temp;
            }
        }
}
//Dua chu hoa -> chu thuong
void lowercase(char *string){
    for(int i=0;i<strlen(string);i++){
        char c=string[i];
        if(c>=65 && c<=90)
            string[i]+=' ';
    }
}
//Dem so lan xuat hien cua ki tu c trong chuoi string
int demc(char *string,char c){
    int dem=0;
    char *ptr = strchr(string,c);
    while((*ptr) == c){
        dem++;
        ptr++;
    }
    return dem;
}
int main(){
    char string[max];
    scanf("%[^\n]",string);
    //Doi chu hoa -> chu thuong
    lowercase(string);
    /*
    Sap xep thu tu theo bang ma ASCII :
    1. mot so ki tu dac biet (bao gom ca dau cach) 
    2. chu so 
    3. 1 so ki tu dac biet khac 
    4. chu thuong
    */
    sapxep(string);
    char *ptr=string;
    //Bo qua cac ki tu dac biet o dau tien
    while((*ptr)<'0')
        ptr++;
    //ptr dang tro den phan chuoi bat dau = so
    //Loc cac ki tu dac biet con sot lai
    int length = strlen(ptr);
    filter(ptr,&length);
    //ptr tro den vung nho chi bao gom chu so - chu thuong
    char copy[length];
    //Sao chep khong lap lai cac phan tu cua chuoi ptr dang tro toi vao chuoi copy
    int dem=0;
    for(int i=0;i<length;i++){
        if(ptr[i]==ptr[i+1])
            continue;
        else{
            copy[dem]=ptr[i];
            dem++;
        }
    }
    //Dem so lan xuat hien cua tung ki tu trong chuoi copy va luu vao mang count
    int count[dem];
    for(int i = 0;i<dem;i++){
        count[i]=demc(ptr,copy[i]);
    }
    //In ket qua
    for(int i=0;i<dem;i++){
        printf("%c %d\n",copy[i],count[i]);
    }
}