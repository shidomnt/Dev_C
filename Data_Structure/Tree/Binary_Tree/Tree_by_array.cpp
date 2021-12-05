#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
struct Node{
    int value;
    struct Node *Left;
    struct Node *Right;
};
void Tree_Init(Node *Tree){
    Tree->Left = NULL;
    Tree->Right = NULL;
}
Node *Create_Node(int value){
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->value = value;
    new_node->Left = NULL;
    new_node->Right = NULL;
    return new_node;
}
void Insert_Node(Node *Tree,int value,char pos){
    Node *new_node = Create_Node(value);
    if(pos == 'l')
        Tree->Left = new_node;
    else
        Tree->Right = new_node;
}
void Nhap_Tree(Node *Tree,int i){
    int left,right;
    char check;
    printf("\n%dCo left(F%d) khong? 0 - 1",Tree->value,i+1);
    fflush(stdin);
    check = getch();
    if(check == '1'){
        printf("\nNhap Left(F%d): ",i+1);
        scanf("%d",&left);
        Insert_Node(Tree,left,'l');
        printf("Nhap con cho node %d(F%d) bam 1",left,i+1);
        fflush(stdin);
        check = getch();
        if(check == '1')
        Nhap_Tree(Tree->Left,i+1);
    }
    printf("\n%dCo right(F%d) khong? 0 - 1",Tree->value,i+1);
    fflush(stdin);
    check = getch();
    if(check == '1'){
        printf("\nNhap Right(F%d): ",i+1);
        scanf("%d",&right);
        Insert_Node(Tree,right,'r');
        printf("Nhap con cho node %d(F%d) bam 1",right,i+1);
        fflush(stdin);
        check = getch();
        if(check == '1')
        Nhap_Tree(Tree->Right,i+1);
    }
}
void Duyet_Tree(Node *Tree,const char *Phuong_Thuc){
    if(!strcmp(Phuong_Thuc,"Truoc") && Tree!=NULL){
        printf("%d ",Tree->value);
        Duyet_Tree(Tree->Left,"Truoc");
        Duyet_Tree(Tree->Right,"Truoc");
    }
    else if(!strcmp(Phuong_Thuc,"Giua") && Tree!=NULL){
        Duyet_Tree(Tree->Left,"Giua");
        printf("%d ",Tree->value);
        Duyet_Tree(Tree->Right,"Giua");
    }
    else if(!strcmp(Phuong_Thuc,"Sau") && Tree!=NULL){
        Duyet_Tree(Tree->Left,"Sau");
        Duyet_Tree(Tree->Right,"Sau");
        printf("%d ",Tree->value);
    }
}
int main() {
    Node Tree;
    Tree_Init(&Tree);
    Node *Root = &Tree;
    printf("\nNhap Root = ");
    scanf("%d",&Root->value);
    Nhap_Tree(&Tree,0);
    printf("\nDuyet Truoc: ");
    Duyet_Tree(&Tree,"Truoc");
    printf("\nDuyet Giua: ");
    Duyet_Tree(&Tree,"Giua");
    printf("\nDuyet Sau: ");
    Duyet_Tree(&Tree,"Sau");
    return 0;
}