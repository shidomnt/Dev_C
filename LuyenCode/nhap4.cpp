#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
void sort(int *a,int n){
   int max = a[0];
   int min = a[0];
   for(int i =0;i<n;i++){
      if(max<a[i])
      max = a[i];
      if(min>a[i])
      min = a[i];
   }
   int k = max - min + 1;
   int count[k];
   for(int i = 0;i<k;i++)
   count[i] = 0;
   for(int i=0;i<n;i++)
   count[a[i]-min]++;
   for(int i=1;i<k;i++)
   count[i]+=count[i-1];
   int temp[n];
   for(int i=0;i<n;i++){
      temp[count[a[i]-min]-1] = a[i];
      count[a[i]-min]--;
   }
   for(int i=0;i<n;i++)
   a[i] = temp[i];
}
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   sort(a,n);
   for(int i=0;i<n;i++)
   printf("%d",a[i]);
   getch();
   return 0;
}