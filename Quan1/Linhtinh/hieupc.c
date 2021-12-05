#include <stdio.h>
char win(char M[][3]){
//with X
if(M[0][0]=='X'&&M[0][1]=='X'&&M[0][2]=='X'){
return 'X';
}
if(M[1][0]=='X'&&M[1][1]=='X'&&M[1][2]=='X'){
return 'X';
}
if(M[2][0]=='X'&&M[2][1]=='X'&&M[2][2]=='X'){
return 'X';
}
if(M[0][0]=='X'&&M[1][0]=='X'&&M[2][0]=='X'){
return 'X';
}
if(M[0][1]=='X'&&M[1][1]=='X'&&M[2][1]=='X'){
return 1;
}
if(M[0][2]=='X'&&M[1][2]=='X'&&M[2][2]=='X'){
return 'X';
}
if(M[0][0]=='X'&&M[1][1]=='X'&&M[2][2]=='X'){
return 'X';
}
if(M[0][2]=='X'&&M[1][1]=='X'&&M[2][0]=='X'){
return 'X';
}
//with O
if(M[0][0]=='O'&&M[0][1]=='O'&&M[0][2]=='O'){
return 'O';
}
if(M[1][0]=='O'&&M[1][1]=='O'&&M[1][2]=='O'){
return 'O';
}
if(M[2][0]=='O'&&M[2][1]=='O'&&M[2][2]=='O'){
return 'O';
}
if(M[0][0]=='O'&&M[1][0]=='O'&&M[2][0]=='O'){
return 'O';
}
if(M[0][1]=='O'&&M[1][1]=='O'&&M[2][1]=='O'){
return 'O';
}
if(M[0][2]=='O'&&M[1][2]=='O'&&M[2][2]=='O'){
return 'O';
}
if(M[0][0]=='O'&&M[1][1]=='O'&&M[2][2]=='O'){
return 'O';
}
if(M[0][2]=='O'&&M[1][1]=='O'&&M[2][0]=='O'){
return 'O';
}
//with tie
return '/';
}
void Table(char M[][3],char N[][3]){
printf("\n\n\tNGuoi choi \t\tBang huong dan\n");
printf("\t ____________________ \t\t ____________________ \n");
printf("\t| | | |\t\t| | | |\n");
printf("\t| %c | %c | %c |\t\t| 1 | 2 | 3 |\n",N[0][0],N[0][1],N[0][2],M[0][0],M[0][1],M[0][2]);
printf("\t|______|______|______|\t\t|______|______|______|\n");
printf("\t| | | |\t\t| | | |\n");
printf("\t| %c | %c | %c |\t\t| 4 | 5 | 6 |\n",N[1][0],N[1][1],N[1][2],M[1][0],M[1][1],M[1][2]);
printf("\t|______|______|______|\t\t|______|______|______|\n");
printf("\t| | | |\t\t| | | |\n");
printf("\t| %c | %c | %c |\t\t| 7 | 8 | 9 |\n",N[2][0],N[2][1],N[2][2],M[2][0],M[2][1],M[2][2]);
printf("\t|______|______|______|\t\t|______|______|______|\n");
}
void Nhap(char M[][3],char N[][3]){
int n=5;
while(n--){
char a,b;
printf("\nMoi nguoi choi 1 nhap: ");
fflush(stdin);
scanf("%c", &a);
fflush(stdin);
int i;
for(i=0;i<3;i++){
int j;
for(j=0;j<3;j++){
if(a==M[i][j]){
M[i][j]='X';
N[i][j]='X';
}
}
}
system("cls");
Table(M,N);
char w=win(M);
if(w=='X'){
printf("\n\n\tX WIN!");
break;
}
if(n==0){
printf("\n\n\tTIE!!!!!!!!!!!");
break;
}
printf("\nMoi nguoi choi 2 nhap: ");
fflush(stdin);
scanf("%c", &a);
fflush(stdin);
for(i=0;i<3;i++){
int j;
for(j=0;j<3;j++){
if(a==M[i][j]){
M[i][j]='O';
N[i][j]='O';
}
}
}
system("cls");
Table(M,N);
//
char t=win(M);
if(t=='O'){
printf("\n\n\tO WIN!");
break;
}
}
}
void Menu(){
printf("\n\n");
printf("xxxxxxxx xxxxxxxx ooooooooooo \n");
printf("x x x x o ooooo o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x xx x xxxxoooo o o o o \n");
printf(" x xx x xxxxoooo o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o o o \n");
printf(" x x x x o o ooooo o o \n");
printf("xxxxxxx x xxxxxx xx o ooooooooooo o \n\t\t\t\t\t\t\t\twith 2 player\n");
printf("\n\n");
printf("_____________________________________________________________________________________________\n");
printf("\t\t\t1.Choi\n");
printf("\t\t\t2.Thoat\n");
printf("Moi ban nhap: ");
char n;
char h;
scanf("%c", &n);
switch(n){
case '1':
while(1){
char M[3][3]={'1','2','3','4','5','6','7','8','9'};
char N[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
system("cls");
Table(M,N);
Nhap(M,N);
printf("\nBan co muon choi tiep k (Y/N)or(1/0):? ");
scanf("%c",&h);
if(h=='y'||h=='Y'||h=='1'){
New(M,N);
}else{
break;
}
}
break;
case '2':
break;
}
}
int main(){
Menu();
return 0;
}