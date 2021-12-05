#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n(100-999)= ");
    scanf("%d",&n);
    while(n<100||n>999){
        printf("Sai! Nhap lai n= ");
        scanf("%d",&n);
    }
    printf("CAC UOC CUA %d LA: ",n);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) printf("%d , %d , ",i,n/i);
    }
    getch();
}