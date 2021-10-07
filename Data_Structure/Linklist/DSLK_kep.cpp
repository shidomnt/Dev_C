#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
struct node
{
    int digit;
    struct node *next;
    struct node *pre;
};
typedef node node;
struct DSLKK
{
    node *Header;
    node *Tail;
    int Length;
};
typedef DSLKK DSLKK;
node *New_node(int digit)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->digit = digit;
    new_node->next = NULL;
    new_node->pre = NULL;
    return new_node;
}
DSLKK *List_Init()
{
    DSLKK *List = (DSLKK *)malloc(sizeof(DSLKK));
    List->Header = NULL;
    List->Tail = NULL;
    List->Length = 0;
    return List;
}
int Empty_list(DSLKK List)
{
    if (List.Header)
        return 0;
    else
        return 1;
}
void Insert_Head(int digit, DSLKK *List)
{
    node *new_node = New_node(digit);
    if (Empty_list(*List))
    {
        List->Header = new_node;
        List->Tail = new_node;
    }
    else
    {
        new_node->next = List->Header->next;
        List->Header->next->pre = new_node;
        List->Header = new_node;
    }
    List->Length++;
}
void Insert_Rear(int digit, DSLKK *List)
{
    if (Empty_list(*List))
    {
        Insert_Head(digit, List);
    }
    else
    {
        node *new_node = New_node(digit);
        List->Tail->next = new_node;
        new_node->pre = List->Tail;
        List->Tail = new_node;
        List->Length++;
    }
}

void Insert_List(int digit, int position, DSLKK *List)
{
    if (position <= 1)
        Insert_Head(digit, List);
    else if (position > List->Length)
        Insert_Rear(digit, List);
    else
    {
        node *new_node = New_node(digit);
        node *p = List->Header;
        for (int i = 1; i < position - 1; i++)
            p = p->next;
        new_node->pre = p;
        new_node->next = p->next;
        p->next->pre = new_node;
        p->next = new_node;
        List->Length++;
    }
}
void Input(DSLKK *List)
{
    puts("Nhap so luong: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int digit;
        scanf("%d", &digit);
        Insert_Rear(digit, List);
    }
}
void Output(DSLKK *List)
{
    node *p = List->Header;
    while (p != NULL)
    {
        printf("%d ", p->digit);
        p = p->next;
    }
    puts("");
}
void Rev_List(DSLKK *List)
{
    node *p = List->Tail;
    while (p != NULL)
    {
        printf("%d ", p->digit);
        p = p->pre;
    }
    puts("");
}

int main()
{
    DSLKK *List = List_Init();
    Input(List);
    Output(List);
    Insert_List(1233, 3, List);
    Output(List);
    Rev_List(List);
    return 0;
}