#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int luythua(int x,int n){
    if(n==0)
    return 1;
    else
    return luythua(x,n-1) * x;
}
int main() {
    int n,x;
    scanf("%d %d",&x,&n);
    printf("%d",luythua(x,n));
    return 0;
}