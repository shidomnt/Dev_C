#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        printf("%2c",'*');
        printf("\n");
    }
    getch();
}