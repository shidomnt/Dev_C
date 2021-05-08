#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int space_count(char *string, int *a,int *n){
    if(strchr(string,' ')==NULL)
    return 0;
    else{
        *(a+(*n))= (int)strchr(string,' ');
        (*n)++;
        return 1 + space_count(strchr(string,' ') + 1 , a, n);
    }
}
int main(){
    char *string;
    string = (char*) malloc(100*sizeof(char));
    //Nhap chuoi
    scanf("%[^\n]",string);
    int *a = (int*) malloc(100*sizeof(int));
    int n=0;
    int sl_space = space_count(string,a,&n);
    for(int i=0;i<=n;i++)
    printf("%d ",a[i]);
    
    return 0;
    
}