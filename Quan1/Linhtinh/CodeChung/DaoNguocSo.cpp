#include<stdio.h>
#include<math.h>
#include<stdbool.h>
void sapxep(int a[],int n){
    for(int i=0;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void nhapmang(int v[],int n){
    for(int i=0;i<n;i++)
    scanf("%d",&v[i]);
}
int maxbanhchung(int v[],int n,int V){
    int i,s=0;
    for(i=n;i>=0;i--){
        if(s+v[i]<=V) s+=v[i];
    }
    return s;
}
int main(){
    int n,V;
    scanf("%d%d",&n,&V);
    int v[n];
    nhapmang(v,n);
    sapxep(v,n);
    printf("%d",maxbanhchung(v,n,V));
    return 0;
}