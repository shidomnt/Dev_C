#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
bool check;
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
        if(check){
            char *a = (char*) d;
            for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
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
}
int sapxepocs(int a){
    if(a<0){
        check=true;
        a=abs(a);
    }
    int n=demcs(a)+1;
    char b[n];
    for(int i=0;i<n;i++)
    b[i]=NULL;
    inttoa(a,b);
    sapxep(b,strlen(b),"char");
    if(check==false)
    return atoint(b);
    else
    return atoint(b)*(-1);
}
void sapxepcs(int *a,int n){
    for(int i=0;i<n;i++){
        check=false;
        a[i]=sapxepocs(a[i]);
    }
}
void nhap(int *a,int n){
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void xuat(int *a,int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    sapxepcs(a,n);
    sapxep(a,n,"int");
    xuat(a,n);
}