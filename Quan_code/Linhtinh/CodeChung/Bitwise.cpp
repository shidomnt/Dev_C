#include<stdio.h>
#include<math.h>
int main(){
    int i=0,j=0,max=0,AND=0,OR=0,XOR=0;
    double n,k;
    scanf("%lf%lf",&n,&k);
    for(i=1;i<=k;i++){
        for(j=i+1;j<=n;j++){
            if((i&j) > AND && (i&j)<k) AND=(i&j);
            if((i|j) > OR && (i|j)<k)  OR=(i|j);
            if((i^j) > XOR && (i^j)<k) XOR=(i^j);
        }
    }
    printf("%d\n%d\n%d", AND,OR,XOR);
    return 0;
}