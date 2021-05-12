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
//K : do rong
void sinh_chuoi_nhi_phan(int k, int n){
   for(int i=0;i<=1;i++){
      a[n]=i;
      if(n==k-1){
         xuat(a,k);
      }
      else
      sinh_chuoi_nhi_phan(k,n+1);
   }

}
int main() {
   sinh_chuoi_nhi_phan(3,0);
   return 0;
}