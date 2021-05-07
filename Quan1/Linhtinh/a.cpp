#include<stdio.h>
#include<math.h>
#include<string.h>
int tongBinhPhuong(int a){
    if(a==0){
        return 0;
    } else return pow(a,2)+tongBinhPhuong(a-1);
}
int main(){
    int a=10, L=11, s;
    s=tongBinhPhuong(a);
    printf("%d",s);
    return 0;
}