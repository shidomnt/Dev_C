#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[30];
    int i,d,n;
    printf("\n NHap xau ky tu: ");
    do{
        gets(str);
        //scanf("%[a-z A-Z]",str);
        //fgets(str,sizeof(str),stdin);
        n=strlen(str);
        if(n<=0||n>=30)
        printf("\n Xau qua dai!Nhap lai!\n");
    }
    while(n<=0||n>=30);
    strupr(str);
    printf("\n Xau vua nhap hien can le trai\n%-40s",str);
    printf("\n Xau vua nhap hien can le phai\n%40s",str);
    printf("\n Xau vua nhap hien can giua man hinh\n");
    i=(80-strlen(str))/2;
    for(d=1;d<=i;d++)
    printf(" ");
    printf(" %s\n",str);
    getch();
}