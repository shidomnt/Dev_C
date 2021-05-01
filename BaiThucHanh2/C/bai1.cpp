#include<stdio.h>
#include<conio.h>
int main(){
    int n,s=0;
    printf("Cho n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    s+=i;
    printf("S= %d\n",s);
    getch();
}