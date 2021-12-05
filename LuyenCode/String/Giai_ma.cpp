#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#define MAX 100
#define DIGIT "123456789"
struct Code{
   char alphabet;
   int digit;
};
int Length_sau_giai_ma(char *a){
   int length = 1;
   for(char *p = strpbrk(a,DIGIT); p!= NULL;p = strpbrk(p,DIGIT)){
      length += *p - '0';
      p++;
   }
   return length;
}
void Gm(char *a){
   int length1 = strlen(a);
   int length2 = Length_sau_giai_ma(a);
   char *Da_giai_ma = (char*) calloc(length2,sizeof(char));
   int j=0;
   int t;
   struct Code temp;
   for(int i=0;i<length1;i+=2){
      temp.alphabet = a[i];
      temp.digit = a[i+1] - '0';
      t = j + temp.digit;
      while(j<t){
         Da_giai_ma[j] = temp.alphabet;
         j++;
      }
   }
   puts(Da_giai_ma);
   free(Da_giai_ma);
}
void Giai_ma(char **a,int size){
   for(int i=0;i<size;i++){
      Gm(a[i]);
   }
}
void Nhap(char **a, int size){
   for(int i=0;i<size;i++){
      fflush(stdin);
      scanf("%s",a[i]);
   }
}
int main() {
   int n;
   scanf("%d",&n);
   char **a = (char**) malloc(sizeof(char*)*n);
   for(int i=0;i<n;i++)
   a[i] = (char*) malloc(sizeof(char)*MAX);
   Nhap(a,n);
   Giai_ma(a,n);
   for(int i=0;i<n;i++)
   free(a[i]);
   free(a);
   return 0;
}