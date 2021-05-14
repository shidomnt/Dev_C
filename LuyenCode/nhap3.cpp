#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define max 200000
void swap(char *a,char *b){
    char t= *a;
    *a= *b;
    *b = t;
}
void rev(char *a,long left,long right){
    while(left<=right){
        swap(&a[left],&a[right]);
        left++;
        right--;
    }
}
void nhap(long *a,long n){
    for(int i=0;i<n;i++)
        scanf("%li",&a[i]);
}
int main(){
    char *string = (char*) malloc(sizeof(char)*max);
    scanf("%[^\n]",string);
    long m;
    scanf("%li",&m);
    long truyvan[m];
    nhap(truyvan,m);
    for(int i=0;i<m;i++){
        if(truyvan[i]==truyvan[i+1]){
            i++;
            continue;
        }
        rev(string,truyvan[i]-1,strlen(string)-truyvan[i]+1 -1);
    }
    puts(string);
    return 0;
}