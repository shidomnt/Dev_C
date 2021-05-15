#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhap(char **a, int n){
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
}
char *amax(char **a,int n){
    char **max=&a[0];
    for(int i=1;i<n;i++){
        if(strcmp(a[i],*max)>0)
            max=&a[i];
    }
    return *max;
}
void xoa(char **a,int pos,int *length){
    for(int i=pos;i<(*length);i++){
        memset(a[i],'\0',sizeof(a[i]));
    	if(i+1==*length)
        break;
        strcpy(a[i],a[i+1]);
    }
    (*length)--;
}
int main(){
    int n;
    int m=10;
    scanf("%d",&n);
    char **so;
    so = (char**) malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
        so[i] = (char*) malloc(sizeof(char)*m);
    }
    nhap(so,n);
    char ketqua[m*n];
    memset(ketqua,'\0',sizeof(ketqua));
    while(n>0){
        char *max = amax(so,n);
        strcat(ketqua,max);
        int pos = (max-(*so))/(so[1]-so[0]);
        xoa(so,pos,&n);
    }
    puts(ketqua);
    for(int i=0;i<n;i++){
        free(so[i]);
    }
    free(so);
    return 0;
}