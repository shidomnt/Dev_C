#include<stdio.h>
#include<conio.h>
int main(){
    int s=0;
    for(int i=2;i<=100;i+=2)
    s+=i;
    printf("Tong cac so chan tu 1-100 la: %d",s);
    getch();
}