#include<stdio.h>
#include<string.h>
void xoakitu(char ten[]){
    int length=strlen(ten);
    while((ten[0]<97||ten[0]>122)&&(ten[0]<65||ten[0]>90)){
        for(int i=0;i<length;i++){
            ten[i]=ten[i+1];
        }
        length--;
    }
    for(int i=0;i<length;i++){
        while((ten[i]<97||ten[i]>122)&&(ten[i]<65||ten[i]>90)&&ten[i]!=' '&&ten[i]!='\0'){
                for(int j=i;j<length;j++)
                    ten[j]=ten[j+1];
                length--;
        }
    }
}
void viethoatenrieng(char ten[]){
    for(int i=0;i<strlen(ten);i++){
        if(ten[i]>=65&&ten[i]<=90)
            ten[i]+=' ';
    }
    int k=0;
    while(1){
        if(ten[k]>=97&&ten[k]<=122){
            ten[k]-=' ';
            break;
        }
        k++;
    }
    for(int i=1;i<strlen(ten);i++){
        if(ten[i]==' '){
            if(ten[i+1]>=97&&ten[i+1]<=122)
                ten[i+1]-=' ';
        }
    }
}
int main(){
    int T;
    scanf("%d",&T);
    char ten[T][100];
    for(int i=0;i<T;i++){
        fflush(stdin);
        gets(ten[i]);
    }
    for(int i=0;i<T;i++){
        viethoatenrieng(ten[i]);
        xoakitu(ten[i]);
        puts(ten[i]);
    }
    return 0;
}