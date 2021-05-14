#include<stdio.h>
#include<windows.h>

char arr[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
int X[6],i=-1, KQ=0;

void xoayPhai(){
    char tmp1=arr[0];
    arr[0]=arr[6]; arr[6]=arr[8]; arr[8]=arr[2]; arr[2]=tmp1;
    char tmp2=arr[1];
    arr[1]=arr[3]; arr[3]=arr[7]; arr[7]=arr[5]; arr[5]=tmp2;
}
void xoayVong(){
    xoayPhai(); xoayPhai();
}
void xoayTrai(){
    xoayVong(); xoayPhai();
}

void showScreen();

void go(){
    if(X[0]%2==0){
            if(X[0]==0){
                xoayPhai();
            }
            else if(X[0]==6){
                xoayVong();
            }
            else if(X[0]==8){
                xoayTrai();
            }    
        }
//******************************************************        
        else {
            if(X[0]==1){
            }
            else if(X[0]==3){
                xoayPhai();
            }
            else if(X[0]==5){
                xoayTrai();
            }
            else if(X[0]==7){
                xoayVong();
            }
        }
}
void back(){
        if(X[0]%2==0){
            if(X[0]==0){
                xoayTrai();
            }
            else if(X[0]==6){
                xoayVong();
            }
            else if(X[0]==8){
                xoayPhai();
            }     
        }
//******************************************************        
        else {
            if(X[0]==3){
                xoayTrai();
            }
            else if(X[0]==5){
                xoayPhai();
            }
            else if(X[0]==7){
                xoayVong();
            }
        }
}

void xetTH2(){
    // if(arr[0]!='X'){
    //     arr[0]='O';
    //     KQ++;
    //     showScreen();
    // } else{
        arr[2]='O';
        back(); arr[X[1]]='X';
        showScreen(); go();
        if(arr[5] != 'X'){
            arr[5]='O';
            KQ++;
        }
        if(arr[5]=='X'){
            arr[6]='O';
            KQ++;
        } 
        back(); arr[X[2]]='X';
        showScreen();
//     }
}

void xet(int X){
    if(X<0 || X>8 || arr[X] !=' '){
        printf("Chi chon cac o trong !!");
        i--;
        showScreen();
        
    }
    else{ 
        arr[X]='X';
        if(X%2==0){
            go();
            arr[6]='O'; back();
            showScreen(); go();//Truong hop 1
        }
//******************************************************        
        else {
            go();
            arr[8]='O'; back();
            showScreen(); go();//Truong hop 2
            xetTH2();
        }
    }
}

void showScreen(){
    system("cls"); i++;
    printf("\n-------------\t\t-------------");
    printf("\n| %c | %c | %c |\t\t| 1 | 2 | 3 |", arr[0], arr[1], arr[2]);
    printf("\n-------------\t\t-------------");
    printf("\n| %c | %c | %c |\t\t| 4 | 5 | 6 |", arr[3], arr[4]='O', arr[5]);
    printf("\n-------------\t\t-------------");
    printf("\n| %c | %c | %c |\t\t| 7 | 8 | 9 |", arr[6], arr[7], arr[8]);
    printf("\n-------------\t\t-------------");
    if(KQ==0){
        printf("\n\n-->Chon o ban muon danh (X): ");
        scanf("%d", &X[i]); X[i]--; 
        if((X[i]>=0 && X[i]<=8) && arr[X[i]] !=' '){
            arr[X[i]]='X';
        }
        if(X[i]!=10 && i==0){
            
            xet(X[i]);
        }
    } else printf("\n==> YOU LOSED");
}

// void xetTH1(int X){
    
// }


int main(){
    
    system("cls");
    printf("\n**** Welcome to XO game ****");
    printf("\n--Chon che do choi--");
    printf("\n1. May danh truoc\n2. Nguoi danh truoc\n0. Thoat game\n--> ");
    char c;
    scanf("%c", &c);
    switch (c)
    {
    case '1':
        showScreen();
        xet(X[i]);
        break;
    case '2':
        printf("\nChe do chua cap nhat.\nVui long quay lai sau!");
        break;
    case '0':
        break;
    default:
        printf("\nVui long chi chon (1,2,0)");
        break;
    }
    return 0;
}

