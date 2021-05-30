#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
struct Node {
    int value;
    struct Node *next;
};
typedef struct Linklist{
    Node *head;
    Node *tail;
}Linklist;
Node *Create_Node(int value);
void InitList(Linklist *list);
int IsEmpty(Linklist *list);
void Insert_Node(Linklist *list,int value);
void Rev_list(Linklist *list);
void Nhap(Linklist *list);
void Xuat(Linklist list);
int main() {
    Linklist list;
    InitList(&list);
    Nhap(&list);
    printf("\nTruoc: ");
    Xuat(list);
    Rev_list(&list);
    printf("\nSau: ");
    Xuat(list);
    return 0;
}
Node *Create_Node(int value){
    Node *new_n = (Node*) malloc(sizeof(Node));
    new_n->value=value;
    new_n->next = NULL;
    return new_n;
}
void InitList(Linklist *list){
    list->head = list->tail = NULL;
    return;
}
int IsEmpty(Linklist *list){
    return (list->head == NULL);
}
void Insert_Node(Linklist *list,int value){
    Node *new_n = Create_Node(value);
    if(IsEmpty(list))
    {
        list->head = new_n;
        list->tail = new_n;
    }
    else
    {
        list->tail->next = new_n;
        list->tail = list->tail->next;
    }
}
void Rev_list(Linklist *list){
    Node *pre = NULL;
    Node *cur = list->head;
    Node *next;
    while(cur != NULL){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    Node *temp = list->head;
    list->head = list->tail;
    list->tail = temp;
}
void Nhap(Linklist *list){
    char c;
    int value;
    while(1){
        puts("De nhap du lieu bam 1");
        fflush(stdin);
        c = getch();
        if(c!='1')
        break;
        printf("Nhap: ");
        scanf("%d",&value);
        Insert_Node(list,value);
    }
}
void Xuat(Linklist list){
    for(Node *p=list.head;p != NULL; p = p->next){
        printf("%d ",p->value);
    }
}