#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int D(float **array,int angle){
    if(angle==2){
        return (array[0][0]*array[1][1]-array[0][1]*array[1][0]);
    }
    else{
        return array[angle-1][angle-1]*D(array,angle-1);
    }

}
int main(){
    int angle;
    scanf("%d",&angle);
    float **array=(float**) malloc(angle*sizeof(float *));
    for(int i=0;i<angle;i++){
        array[i]=(float*) malloc(angle*sizeof(float));
    }
    for(int i=0;i<angle;i++){
        for(int j=0;j<angle;j++)
        scanf("%f",&array[i][j]);
    }
    printf("%d",D(array,angle));
    return 0;
}