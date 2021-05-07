#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float tong(int n){
    if(n==1)
    return 1.0/2;
    else
    return tong(n-1) + 1.0/(n*(n+1));
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tong(n));
    return 0;
}