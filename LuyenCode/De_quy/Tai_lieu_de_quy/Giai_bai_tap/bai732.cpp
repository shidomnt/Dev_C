#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float tongnghichdao(int n){
    if(n==1)
    return 1.0;
    else
    return 1.0/n + tongnghichdao(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tongnghichdao(n));
    return 0;
}