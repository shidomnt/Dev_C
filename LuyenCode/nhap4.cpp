#include <stdio.h>
#include <stdlib.h>
long long int giaithua(int n){
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
}
long long int tohopchap2(int n){
    long long int ts=giaithua(n);
    long long int ms=giaithua(n-2)*2;
    return ts/ms;
}
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
   int a=67;
   printf("%lli",C(2,a));
   return(0);
}