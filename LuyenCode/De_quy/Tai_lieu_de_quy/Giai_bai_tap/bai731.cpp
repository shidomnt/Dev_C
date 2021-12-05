#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tongbinhphuong(int n){
    if(n==1)
    return 1;
    else
    return n*n + tongbinhphuong(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",tongbinhphuong(n));
    return 0;
}