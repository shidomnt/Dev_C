#include<stdio.h>
#include<string.h>

int tontai(char chuoi[],char kitu[]){
    //chuyen ve chu thuong

    for(int i=0;i<strlen(chuoi)-1;i++){
        if(chuoi[i]>=65&&chuoi[i]<=90)
            chuoi[i]+=' ';
    }

    //dem so lan xuat hien
    
    int length=strlen(chuoi)-1;
    int start;
    if(strchr(chuoi,kitu[0])!=NULL)
        start=strchr(chuoi,kitu[0])-chuoi;
    else
        start=0;
    int dem=0;
    for(int i=start;i<length;i++){
        if(chuoi[i]==kitu[0])
            dem++;
    }
    return dem;
}
int main(){
    //nhap chuoi
    
    char chuoi[100];
    fgets(chuoi,sizeof(chuoi),stdin);
    //nhap so lan tim
    
    int T;
    scanf("%d",&T);
    //nhap ki tu can tim
    
    char kitu[T][2];
    for(int i=0;i<T;i++){
        scanf("%s",&kitu[i]);
    }
    //chuyen ve chu thuong
    
    for(int i=0;i<T;i++){
        if(kitu[i][0]>=65&&kitu[i][0]<=90)
        kitu[i][0]+=' ';
    }
    for(int i=0;i<T;i++){
        printf("%d\n",tontai(chuoi,kitu[i]));
    }
    return 0;
}