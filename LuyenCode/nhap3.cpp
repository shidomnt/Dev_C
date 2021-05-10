#include<stdio.h>
#include<string.h>
int main()
{
   char x[]="12321314443213";
   char y[]="43534534543";
   char xl[30];
   char yl[30];
   char xn[30];
   char yn[30];
   memmove(xl,x,strlen(x)-1);
   
   printf("%s\n",xl);
   printf("%s\n",x);
   return(0);
}