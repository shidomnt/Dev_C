#include<stdio.h>
#include<math.h>
int main(){
	double n;
	scanf ("%lf",&n);
	if(n>0){
		double c=fabs(fabs(n)-fabs((int)n));
		if(c>=0.5) printf("%d",(int)n+1);
		else printf("%d",(int)n);
 	}else{
		double c=fabs(fabs((int)n)-fabs(n));
		if(c>=0.5) printf("%d",(int)n-1);
		else printf("%d",(int)n);
	}
	return 0;
}
