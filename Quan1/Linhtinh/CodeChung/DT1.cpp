#include<stdio.h>
#include<math.h>
#define pi 3.1415
int main(){
    double S,a;
    scanf("%lf",&a);
    S= pi*pow(a,2)/2;
    printf("%.3lf",S);
    return 0;
}