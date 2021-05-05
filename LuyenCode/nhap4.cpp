#include <stdio.h>
#include <stdlib.h>
void bin(int a,int *binary){
    int i=15;
    while(a/2!=0){
        *(binary+i)=a%2;
        a/=2;
        i--;
    }
    *(binary+i)=a%2;
}
int main()
{
   int a=65535;
   int *binary;
   binary=(int*) calloc(16,sizeof(int));
   bin(a,binary);
   for(int i=0;i<15;i++)
   printf("%d",binary[i]);
   return(0);
}