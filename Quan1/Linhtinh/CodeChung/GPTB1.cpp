#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d,e,f,x,y;
	scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
	if (a/d == b/e && b/e == c/f || d/a == e/b && e/b == f/c)
	{
		printf("VOSONGHIEM");
	} else if(a*e == b*d){
		printf("VONGHIEM");
	} else{
		x=(e*c-b*f)/(a*e-b*d);
		if(b==0){	
			y=(f-d*x)/e;
		} else{
			y=(c-a*x)/b;
		}
		printf("%.2lf %.2lf", x, y);
	}
	
	return 0;
}
