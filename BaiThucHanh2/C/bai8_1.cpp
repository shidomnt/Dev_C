#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    printf("Nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        printf("%2c",'*');
        printf("\n");
    }
    getch();
}