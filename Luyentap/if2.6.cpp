// pt bậc 2 ax^2 +bx +c =0
#include<stdio.h>
#include<conio.h>
#include<math.h>
float delta(float a, float b, float c){
    float delta= b*b-4*(a*c);
    return delta;
}
int ptbac2(float a, float b, float c, float *x1, float *x2){
	if(a==0){
        if(b==0){
           if(c==0)
           return 1;
           else
           return -1;
        }
        else{
		*x1 = *x2 = -c/b;
        return 0;
        }
    }
    else
    {
    	float d = delta(a,b,c);
        printf("\n delta = %f", d);
        if(d>0){
        	*x1 = (-b+sqrt(d))/(2*a);
        	*x2 = (-b-sqrt(d))/(2*a);
		}
        //printf("\n x1 =%f \t x2 = %f",(-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a) );
        else{
            if(d==0)
            //printf("\n x = %f", -b/(2*a));
            {
            	*x1 = *x2 = -b/(2*a);
            	return 0;
			}
            else
            return -1;
        } 
    }
}
int main () {
    char  a[5];
    int d ;
    int c =scanf("%s %d",a,&d);`
    printf("%d\n%s",c,a);
    //ptbac2(a,b,c,&x1,&x2);  //nhu nay

/*
    if(check == -1)
    puts("\nPT vo nghiem");
    else if(check == 1)
    puts("\nPT vo so nghiem");
    else
    printf("\n x1= %f\nx2 = %f",x1,x2);
*/
    getch();    
}
