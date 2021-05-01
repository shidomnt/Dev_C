#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    printf("Nhap n= ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--)
        printf("%2c",' ');
        for(k=1;k<=i+j;k++)
        printf("%2c",'*');
        printf("\n");
    }
    getch();
}