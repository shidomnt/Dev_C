#include<stdio.h>
#include<math.h>
void nhap(long long a[],int n){
    for(int i=0;i<n;i++)
        scanf("%lli",&a[i]);
}
void sapxep(long long a[],int n){
    for(int i=0;i<n;i++){
        int j=i-1;
        long long temp=a[j+1];
        while(j>=0&&temp>a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void dupfilter(long long a[],int *n){
    for(int i=0;i<(*n);i++){
        while(a[i]==a[i+1]){
            for(int j=i;j<(*n);j++){
                a[j]=a[j+1];
            }
            (*n)--;
        }
    }
}
void counting_sort(long long a[],int n){
    long long max=a[0];
    long long min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    int k=max-min+1;
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++){
        count[a[i]-min]++;
    }
    for(int i=1;i<k;i++){
        count[i]+=count[i-1];
    }
    long long b[n];
    for(int i=0;i<n;i++){
        b[count[a[i]-min]-1] = a[i];
        count[a[i]-min]--;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    nhap(a,n);
    counting_sort(a,n);
    int dem=1;
    int b[n];
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            dem++;
        }
        else{
            b[k]=dem;
            dem=1;
            k++;
        }
    }
    dupfilter(a,&n);
    int max=b[0];
    int pos=0;
    int i;
    for(i=0;i<k;i++)
        if(max<b[i]){
            max=b[i];
            pos=i;
        }
    printf("%d %d",a[pos],b[pos]);
}