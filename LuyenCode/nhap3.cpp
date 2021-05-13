#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
int atoint(char *a){
    int length=strlen(a);
    int k=0;
    int s=0;
    for(int i=length-1;i>=0;i--){
        s+=(a[i]-'0')*pow(10,k);
        k++;
    }
    return s;
}
int demcs(int a){
    int dem=1;
    while(a>10){
        a/=10;
        dem++;
    }
    return dem;
}
void daonguoc(char *a){
    int left=0;
    int right=strlen(a)-1;
    while(left<=right){
        char temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}
void inttoa(int a,char *b){
    int i=0;
    while(a>10){
        b[i]=(a%10)+'0';
        a/=10;
        i++;
    }
    b[i]=a+'0';
    daonguoc(b);
}
void sapxep(void *d,int n,const char *f){
    if(!strcmp(f,"int")){
        int *a = (int*) d;
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
    else{
        char *a = (char*) d;
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
int sapxepocs(int a){
    char b[20];
    for(int i=0;i<20;i++)
    b[i]=NULL;
    inttoa(a,b);
    sapxep(b,strlen(b),"char");
    return atoint(b);
}
void sapxepcs(int *a,int n){
    for(int i=0;i<n;i++){
        a[i]=sapxepocs(a[i]);
    }
}
void xuat(int *a,int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main() {
    int a[4]={12334,5324,3434,4554};
    //printf("%d\n",sapxepocs(a[1]));
    sapxepcs(a,4);
    xuat(a,4);
}