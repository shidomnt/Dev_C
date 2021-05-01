#include<stdio.h>
int main(){
    int r,c;
    printf("So hang= ");
    scanf("%d",&r);
    printf("So cot= ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
        printf("%3d",a[j][i]);
        printf("\n");
    }
    return 0;
}