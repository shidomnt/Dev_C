#include<stdio.h>
#include<conio.h>
int main(){
    int s=0,i=100;
    while(i<=999){
        s+=i;
        i+=5;
    }
    printf("Tong cac so co 3 chu so chia het cho 5 la: %d",s);
    getch();
}