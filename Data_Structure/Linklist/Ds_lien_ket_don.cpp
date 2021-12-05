#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
typedef struct element{
    int ts;
    int ms;
}element;
typedef struct Node{
    struct element data;
    struct Node* next;
}*node;
long GiaiThua(int n){
    if(n==0) return 1;
    return n*GiaiThua(n-1);
}
node CreateNode(element data){
    node new_node = (node) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void AddToTail(node *head,element data){
    if(*head == NULL){
        *head = CreateNode(data);
        return;
    }
    node pNode = CreateNode(data);
    node r = *head;
    while(r->next != NULL)
    r = r->next;
    r->next = pNode;
}
void CreateList(node *head,int x, int n){
    element data;
    for(int i=1;i<=n;i++){
        data.ts = pow(x,i);
        data.ms = GiaiThua(i);
        AddToTail(head,data);
    }
}
void ShowList(node head){
    node r = head;
    printf("\n=== Danh sach lien ket ===\n");
    while(r != NULL){
        printf("%d/%d ",r->data.ts,r->data.ms);
        r=r->next;
        if(r!=NULL)
        printf("+ ");
    }
    printf("\n============");
}
void ShowResult(node head){
    printf("\n===Result===");
    double sum = 0;
    node r = head;
    while(r != NULL){
        sum += (double)r->data.ts / r->data.ms;
        r = r->next;
    }
    printf("\nS(x,n) = %lf",sum);
    printf("\n============");
}
void InsertNode(node **pHead){
    printf("\n===Chen them phan tu===");
        element data;
        printf("\nNhap tu so: ");
        scanf("%d",&data.ts);
        printf("\nNhap mau so: ");
        scanf("%d",&data.ms);
        char pos[5];
        printf("\nNhap vi tri muon chen (head || mid || tail): ");
        scanf("%s",pos);
        node new_node = CreateNode(data);
        node r = **pHead;
        if(!strcmp(pos,"head")){
            new_node->next = r;
            *pHead = &new_node;
        }
        else if(!strcmp(pos,"mid")){
            int apos;
            printf("\nVi tri thu: ");
            scanf("%d",&apos);
            if (apos<1){
                puts("\nKhong hop le!");
                return;
            }
            int count = 1;
            while(count !=apos){
                if(r == NULL && count != apos){
                    printf("Khong hop le!");
                    return;
                }
                r=r->next;
                count++;
            }
            new_node->next = r->next;
            r->next = new_node;
        }
        else if(!strcmp(pos,"tail")){
            while(r->next != NULL)
            r=r->next;
            r->next = new_node;
        }
}
void DeteleNode(node **pHead){
    printf("\nNhap vi tri can xoa(head || mid || tail): ");
    char pos[5];
    scanf("%s",pos);
    node r = **pHead;
    if(!strcmp(pos,"head")){
        **pHead = (**pHead)->next;
        free(r);
    }
    else if(!strcmp(pos,"mid")){
        printf("\nVi tri xoa: ");
        int apos;
        scanf("%d",&apos);
        int count = 1;
        int check = 1;
        while(r!=NULL){
            if(count == apos){
                node q = r->next;
                r->next = q->next;
                free(q);
                check = 0;
            }
            r=r->next;
            count++;
        }
        if(check)
        puts("\nKhong tim thay!");
    }
    else if(!strcmp(pos,"tail")){
        while(r->next->next != NULL){
            r=r->next;
        }
        node q = r->next;
        r->next = NULL;
        free(q);
    }
}
void Swap(element *a, element *b){
    element temp = *a;
    *a = *b;
    *b = temp;
}
void Sort(node head){
    node r=head;
    for(r=head;r->next != NULL;r=r->next)
        for( node q = r->next;q !=NULL ; q= q->next){
            if(q->data.ts > r->data.ts)
            Swap(&(q->data),&(r->data));
        }
}
int main() {
    int x,n;
    printf("Nhap x va n: ");
    scanf("%d %d",&x,&n);
    node head = NULL;
    node *pHead = &head;
    CreateList(pHead,x,n);

    ShowList(*pHead);
/*
    Insert:
    InsertNode(&pHead);
    ShowList(*pHead);
    printf("\nTiep tuc chen bam 1\nThoat bam phim bat ki");
    char check=getch();
    if (check == '1')
    goto Insert;
*/
/*
    Delete:
    DeteleNode(&pHead);
    ShowList(*pHead);
    printf("\nTiep tuc xoa bam 1\nThoat bam phim bat ki");
    char check=getch();
    if (check == '1')
    goto Delete;
*/
    Sort(*pHead);
    ShowList(*pHead);
    ShowResult(*pHead);
    return 0;
}