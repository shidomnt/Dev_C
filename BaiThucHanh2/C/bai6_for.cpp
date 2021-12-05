#include<stdio.h>
#include<conio.h>
int main(){
    int s=0;
    for(int i=100;i<=999;i+=5)
    s+=i;
    printf("Tong cac so co 3 chu so chia het cho 5 la: %d",s);
    getch();
}