#include<stdio.h>
#include<math.h>
#include<string.h>

void isLeapYear(int n){
    if(n%4==0 && n%100!=0){
        printf("It's a leap year !");
    } else{
        printf("It's not a leap year !");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    isLeapYear(n);
    return 0;
}