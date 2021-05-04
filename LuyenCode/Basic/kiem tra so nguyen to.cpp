#include<stdio.h>
#include<math.h>
int main(){
    long long int n;
    scanf("%lli",&n);
    if(n>=2){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i!=0) continue;
        else{
            printf("NO");
            return 0;
        }
    }
    }
    else{
    	printf("NO");
    	return 0;
	}
    printf("YES");
    return 0;
}
