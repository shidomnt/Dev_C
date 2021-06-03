#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
//Complete the following function.
//Ham tinh to hop
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
//Tim max nho hon k
int timmax(int a[],int t,int k){
    int max=0,i;
    for( i=0;i<t;i++){
        int temp=max;
        if(a[i]>max)
        max=a[i];
        if(max>=k)
        max=temp;
    }
    return max;
}

void calculate_the_maximum(int n, int k) {
  //Khai bao mang chua gia tri AND OR XOR 
  int t=C(2,n);
  int aand[t];
  int aor[t];
  int axor[t];
  int i=0,a,b;
  for( a=1;a<n;a++){
      for( b=a+1;b<=n;b++){
        aand[i]=a&b;
        aor[i]=a|b;
        axor[i]=a^b;
        i++;
      }
  }
  printf("%d\n",timmax(aand,t,k));
  printf("%d\n",timmax(aor,t,k));
  printf("%d\n",timmax(axor,t,k));
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 	getch();
    return 0;
}
