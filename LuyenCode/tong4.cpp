#include<stdio.h>
void nhapmang(long int a[],long int T){
    for(long int i=0;i<T;i++)
        scanf("%li",&a[i]);
}
int main(){
    long int T;
    scanf("%li",&T);
    long int a[T];
    double s=0;
    nhapmang(a,T);
    for(long int i=0;i<T;i++){
        s=2.0-2.0/(a[i]+1);
        printf("%.8lf\n",s);
        }
    return 0;
}