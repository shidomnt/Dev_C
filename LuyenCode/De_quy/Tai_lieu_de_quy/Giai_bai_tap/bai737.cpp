#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float tong(int n){
    if(n==0)
    return 1.0/2;
    else
    return (float)(2*n+1)/(2*n+2) + tong(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tong(n));
    return 0;
}