#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int a[100];
void xuat(int *a,int n){
   for(int i=0;i<n;i++)
   printf("%d ",a[i]);
   printf("\n");
}
void hoanvi(int n,int k){
   for(int i=1;i<=n;i++){
      a[k]=i;
      if(k==n-1){
         xuat(a,n);
      }
      else
      hoanvi(n,k+1);
   }

}
int main() {
   hoanvi(3,0);
   return 0;
}