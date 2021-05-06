#include<stdio.h>
#include<math.h>
#include<stdbool.h> 
int main(){
    double a1,b1,c1,a2,b2,c2;
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
    double D,Dx,Dy;
    D=a1*b2-b1*a2;
    Dx=c1*b2-b1*c2;
    Dy=a1*c2-c1*a2;
    if(D==0){
        if(Dx+Dy==0){
            if(c1+c2!=0)
            printf("VONGHIEM");
            else
            printf("VOSONGHIEM");
        }
        else
        printf("VONGHIEM");
    }
    else printf("%.2lf %.2lf",Dx/D,Dy/D);
    return 0;
}