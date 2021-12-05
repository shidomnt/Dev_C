#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bintodec(int a[],int L,int R){
    int dec=0;
    int k=0;
    for(int i=R;i>=L;i--){
        dec+=a[i]*pow(2,k);
        k++;
    }
    return dec;
}
void nhapmang(int a[],int N){
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
}
int main(){
    int N;
    scanf("%d",&N);
    int Q;
    scanf("%d",&Q);
    int bin[N];
    nhapmang(bin,N);
    while(Q--){
        int type;
        scanf("%d",&type);
        if(type==0){
            int L,R;
            scanf("%d %d",&L,&R);
            int dec=bintodec(bin,L,R);
            if(dec%2==0)
            printf("%d\nEVEN\n",dec);
            else
            printf("%d\nODD\n",dec);
        }
        if(type==1){
            int X;
            scanf("%d",&X);
            if(bin[X]==1)
            bin[X]=0;
            else
            bin[X]=1;
        }
    }
    return 0;
}