#include<conio.h>
#include<stdio.h>
int main(){
    int n,gt=1;
    printf("Nhap n= ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    gt*=i;
    printf("%d! co gia tri la: %d",n,gt);
    getch();
}