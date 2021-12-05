#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tong(int n){
    if(n==1)
    return 1;
    else
    return n+tong(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",tong(n));
    return 0;
}