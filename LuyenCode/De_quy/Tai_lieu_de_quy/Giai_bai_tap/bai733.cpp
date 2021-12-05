#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//S(n)=S(n-1) + 2^(-n)
float tongboi2nd(int n){
    if(n==1)
    return 1.0/2;
    else
    return (tongboi2nd(n-1) + pow(2,-n));
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tongboi2nd(n));
    return 0;
}