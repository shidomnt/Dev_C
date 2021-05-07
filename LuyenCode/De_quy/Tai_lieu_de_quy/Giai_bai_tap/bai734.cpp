#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//S(n) = S(n-1) + 1/(2n+1)
float tongsolend(int n){
    if(n==0)
    return 1;
    else
    return tongsolend(n-1) + 1.0/(2*n+1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%f",tongsolend(n));
    return 0;
}