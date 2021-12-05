#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    long long int t=n,m=1;
    for(int i=1;i<=k-1;i++){
    	t*=(n-i);
	}
	for(int j=2;j<=k;j++){
		m*=j;
	}
	printf("%lli",t/m);
    return 0;
}
