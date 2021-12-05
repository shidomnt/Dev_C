#include<conio.h>
#include<stdio.h>
int main(){
    int a[30],i=1;
    printf("Nhap so dau tien: ");
    scanf("%d",&a[0]);
    while(i<30){        //gioi han 30 phan tu
        printf("Nhap so tiep theo: ");
        scanf("%d",&a[i]);
        if(a[i]==0) break; //gap 0 thi thoat ra khoi vong lap
        i++;
    }
    int dem=0;
    for(int j=0;j<i;j++){
        if(a[j]%2==0) dem++;
    }
    printf("SO CAC SO CHAN LA: %2d",dem);
    getch();
}