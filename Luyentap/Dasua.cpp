// pt bậc 2 ax^2 +bx +c =0
#include<stdio.h>
#include<conio.h>
#include<math.h>
float delta(int a, int b, int c){
    float delta= b*b-4*(a*c);
    return delta;
}
int main () {
    int a, b, c;
    float x;
    printf(" mhap a = ");
    scanf("%d", &a);
    printf(" mhap b = ");
    scanf("%d", &b);
    printf(" mhap c = ");
    scanf("%d", &c);
    float d = delta(a,b,c);
    if(a==0){
        if(b==0){
           if(c==0)
           printf("pt co vo so nghiem");
           else
           printf("pt vo nghiem");
        }
        else
         {x = -c/b;
            printf("\n x = %f", x);
         }

    }
    else
    {
        printf("\n delta = %f", d);
        if(d>0)
        printf("\n x1 =%f \t x2 = %f",(-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a) );
        else {
	        if(d==0)
	        printf("\n x = %f", (float)-b/(2*a));
	        else
	        printf("\n pt vo nghiem");
	    }
    }
    getch();    
}
