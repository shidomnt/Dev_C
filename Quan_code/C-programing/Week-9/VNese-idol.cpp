#include<stdio.h>
#include<math.h>

void swap(float &m, float &n){
    float tmp=m; m=n; n=tmp;
}

void getJudgeData(int i, float &judge){
    float n;
    printf("Judge %d's score: ", i+1);
    scanf("%f", &n);
    if(n>=0 && n<=10){
        judge= n;
    }else{
        printf("*Invalid score !\n");
        getJudgeData(i, judge);
    }
}

void calcScore(float arr[], float &S){
    int i,j;
    for(i=0;i<4;i++){
        for(j=4;j>i;j--){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    S=(arr[1] + arr[2] + arr[3])/3;
}

int main(){
    int i;
    float score, judge[5];
    for(i=0;i<5;i++){
        getJudgeData(i, judge[i]);
    }
    calcScore(judge, score);
    printf("Last score: %.2f", score);
    return 0;
}