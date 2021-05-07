#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float tinhtienlai(int,int,float);
int main() {
    int money;
    scanf("%d",&money);
    int sonam=30,kihan=1;
    float lai=12.0/100;
    float laisuat=lai/kihan;
    printf("%f",tinhtienlai(money,sonam,laisuat));
    return 0;
}

float tinhtienlai(int money,int nam,float laisuat){
    if(nam==0)
    return money;
    else
    return tinhtienlai(money,nam-1,laisuat)*112.0/100;
}