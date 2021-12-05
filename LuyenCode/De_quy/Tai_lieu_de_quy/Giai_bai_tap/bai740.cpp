#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int giaithua(int n){
    if(n==0)
    return 1;
    else
    return n * giaithua(n-1);
}
float tong(int n){
    if(n==1)
    return 1;
    else
    return tong(n-1) + giaithua(n);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tong(n));
    return 0;
}