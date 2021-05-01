#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    printf("Nhap n= ");
    scanf("%d",&n);
    int i,j,k;
    for(i=n;i>=1;i--){
        for(j=n;j>i;j--)
        printf("%2c",' ');
        for(k=1;k<=i+j-1;k++)
        printf("%2c",'*');
        printf("\n");
    }
    getch();
}