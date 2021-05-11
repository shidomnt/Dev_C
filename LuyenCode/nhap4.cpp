#include<stdio.h>
#define max 15
unsigned long long tribo(int n){
    if(n==0||n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return tribo(n-3) + tribo(n-2) + tribo(n-1);
}
int main(){
   	unsigned long long a[max];
    for(int i=0;i<max;i++){
        a[i]=tribo(i);
    }
    unsigned long long n;
    while(scanf("%llu",&n)){
        for(int i=0;i<max;i++)
            if(a[i]>=n){
               printf("%llu\n",a[i]);
               break;
            }
    }
}