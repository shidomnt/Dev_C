#include<stdio.h>
#include<string.h>
int main(){
    //Ham strlen - doc do dai chuoi (string length)
    //int strlen ( const char * str );
/*
    char ten[100];
    printf("Nhap ten: ");
    fgets(ten,sizeof(ten),stdin);  //fgets Lay ca ki tu \n
    printf("\nChieu dai chuoi: %d\n",strlen(ten)-1);  //chieu dai chuoi - 1 ki tu \n
    printf("Nhap ten: ");
    gets(ten); //gets khong lay ki tu \n
    printf("\nChieu dai chuoi: %d",strlen(ten));
*/
    //Ham strcmp - so sanh 2 chuoi (string compare)
    //int strcmp ( const char * str1, const char * str2 );
/*
    char key[]="123abc";
    char matkhau[30];
    printf("Vui long nhap mat khau: ");
    fflush(stdin);
    scanf("%s",&matkhau);
    while(strcmp(key,matkhau)!=0){
        printf("Nhap sai!Vui long nhap lai: ");
        scanf("%s",&matkhau);
    }
    printf("Dang nhap thanh cong!");
*/
    //Ham strcat - noi chuoi (string concatenate)
    //char * strcat ( char * chuoi_dich, const char * chuoi_nguon);
/*
    char ten[30];
    strcat(ten,"Tran ");
    strcat(ten,"Quang ");
    strcat(ten,"Ha");
    //printf("%s",ten);
    puts(ten);
*/
    //Ham strcpy - copy chuoi (string copy)
    //char * strcpy ( char * chuoi_dich, const char * chuoi_nguon);
/*
    char s1[30];
    char s2[30];
    char s3[30];
    printf("Nhap s1: ");
    fgets(s1,sizeof(s1),stdin);
    strcpy(s2,s1);
    strcpy(s3,"AJINOMOTO!");
    printf("s1: %s\ns2: %s\ns3: %s\n",s1,s2,s3);
*/
    //Ham strlwr – Dua chuoi ve dang lowercase (string lower)
    //char * strlwr(char * s);
    //Ham strupr - Dua chuoi ve dang uppercase (string upper)
    //char * strupr (char * s);
/*
    char ten[30];
    printf("Nhap ten: ");
    fgets(ten,sizeof(ten),stdin);
    printf("lower: %s\n",strlwr(ten));
    printf("upper: %s\n",strupr(ten));
*/
    //Ham strrev - dao nguoc chuoi (string reverse)
/*
    char s[30];
    printf("Nhap: ");
    fgets(s,sizeof(s),stdin);
    //gets(s);
    printf("Truoc khi dao nguoc: %s\n",s);
    printf("Sau khi dao nguoc: %s\n",strrev(s));
*/
    //Ham strchr - tim ki tu trong chuoi (string character)
    //Ham strch - vi tri dau
    //Ham strrch - vi tri cuoi
/*  strchr tra ve vi tri(dia chi) dau tien ma ki tu xuat hien trong chuoi
    -> vi tri= dia chi ki tu can tim - dia chi chuoi + 1
*/
/*
    char s[]="Tran Quang Ha";
    char c;
    printf("Ki tu muon tim: ");
    scanf("%c",&c);
    if(strchr(s,c)!=NULL)
    printf("Vi tri: %d\n",strchr(s,c)-s+1);
    else printf("Khong tim thay!");
*/
    //Ham strstr - tim chuoi con trong chuoi (string string)
/*
    char s[]="Tran Quang Ha";
    char c[30];
    printf("Nhap chuoi muon tim: ");
    gets(c);
    if(strstr(s,c)!=NULL) printf("Vi tri: %s\n",strstr(s,c));
    else printf("Khong tim thay!");
*/

    return 0;
}