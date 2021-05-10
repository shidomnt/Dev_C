#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
void daonguocchuoi(char *string){
    char b[strlen(string)];
    int k=0;
    for(int i=strlen(string)-1;i>=0;i--){
        b[k]=string[i];
        k++;
    }
    for(int i=0;i<=strlen(b);i++){
        string[i]=b[i];
    }
}
void inttoa(int n,char *string){
   int i=0;
   while(n/10!=0){
      string[i] = n%10 + '0';
      n/=10;
      i++;
   }
   string[i] = n + '0';
   string[i+1]=NULL;
   daonguocchuoi(string);
}
int main(){
   int n;
   scanf("%d",&n);
   char *string = (char*) malloc(sizeof(char)*20);
   inttoa(n,string);
   puts(string);
   
}