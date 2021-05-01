#include<stdio.h>
#include<conio.h>
//khai bao ham tinh tong 2 so nguyen
int tong(int x,int y){
    int z;
    z=x+y;
    return z;
}
//ham main()
int main(){
    int a,b;
    printf("\n Cho 2 so nguyen a,b: ");
    scanf("%d%d",&a,&b);
    printf("\n Tong cua hai so la %4d", tong(a,b));
    getch();
}