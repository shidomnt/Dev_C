#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
//Trung to ( 3* ( ( (5 - 2) * (7 + 1) ) - 6) )
//Hau to 3 5 2 - 7 1 + * 6 - *
//Truong hop tat ca la so nguyen, phep chia cung la phep chia nguyen
typedef struct DT
{
    char toantu;
    int toanhang;
} DT;
struct node
{
    DT data;
    node *next;
};
typedef struct node *Node;
typedef struct Stack
{
    Node head;
    Node tail;
} Stack;
//Ham tao node moi
Node Create_Node(DT data);
//Ham khoi tao stack
void Stack_Init(Stack *stack);
//Ham kiem tra stack rong
int Stack_Empty(Stack *stack);
//Ham push - them phan tu vao stack
void Push(Stack *stack, DT data);
//Ham pop - lay phan tu ra khoi stack
DT Pop(Stack *stack);
//Ham chuyen doi trung to -> hau to
char *TTtoHT(char *Trung_To);
//Ham tinh toan bieu thuc hau to
int Calculator(Stack *stack, char pheptoan);
int HT_Calculator(char *Hau_to);
int main()
{
    char *Bieu_thuc_trung_to = (char *)malloc(sizeof(char) * 1024);
    scanf("%[^\n]", Bieu_thuc_trung_to);
    int length = strlen(Bieu_thuc_trung_to);
    Bieu_thuc_trung_to = (char *)realloc(Bieu_thuc_trung_to, sizeof(char) * (length + 1));
    char *Bieu_thuc_hau_to = TTtoHT(Bieu_thuc_trung_to);
    printf("Bieu thuc trung to co dang: %s\n", Bieu_thuc_trung_to);
    printf("Bieu thuc hau to co dang: %s\n", Bieu_thuc_hau_to);
    printf("Ket qua: %d", HT_Calculator(Bieu_thuc_hau_to));
    free(Bieu_thuc_trung_to);
    free(Bieu_thuc_hau_to);
    return 0;
}
//Ham tao node moi
Node Create_Node(DT data)
{
    Node new_node = (Node)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
//Ham khoi tao stack
void Stack_Init(Stack *stack)
{
    stack->head = stack->tail = NULL;
}
//Ham kiem tra stack rong
int Stack_Empty(Stack *stack)
{
    if (stack->head == NULL)
        return 1;
    else
        return 0;
}
//Ham push - them phan tu vao stack
void Push(Stack *stack, DT data)
{
    Node new_node = Create_Node(data);
    if (Stack_Empty(stack))
    {
        stack->head = new_node;
        stack->tail = new_node;
    }
    else
    {
        new_node->next = stack->head;
        stack->head = new_node;
    }
}
//Ham pop - lay phan tu ra khoi stack
DT Pop(Stack *stack)
{
    DT data = stack->head->data;
    Node q = stack->head;
    stack->head = stack->head->next;
    q->next = NULL;
    free(q);
    return data;
}
//Ham chuyen doi trung to -> hau to
/*
1.Gặp dấu mở ngoặc -> bỏ quả
2.Gặp toán hạng -> ghi vào biểu thức hậu tố
3.Gặp toán tử -> đưa vào stack
4.Gặp dấu đóng ngoặc -> lấy toán tử trong stack, ghi vào biểu thức hậu tố
*/
char *TTtoHT(char *Trung_To)
{
    int length = strlen(Trung_To);
    char *Hau_To = (char *)calloc((length + 1), sizeof(char));
    Stack stack;
    Stack_Init(&stack);
    DT temp;
    char c;
    int j = 0;
    for (int i = 0; i < length; i++)
    {
        c = Trung_To[i];
        if (c == '(' || c == ' ')
            continue;
        if (c > '0' && c < '9')
        {
            Hau_To[j] = c;
            Hau_To[j + 1] = ' ';
            j += 2;
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            temp.toantu = c;
            Push(&stack, temp);
        }
        else if (c == ')')
        {
            temp = Pop(&stack);
            Hau_To[j] = temp.toantu;
            Hau_To[j + 1] = ' ';
            j += 2;
        }
    }
    return Hau_To;
}
//Ham tinh toan bieu thuc hau to
//Hau to 3 5 2 - 7 1 + * 6 - *
/*
1.Gặp toán hạng thì thêm vào stack.
2.Gặp toán tử thì lấy 2 toán hạng từ stack rồi thực hiện phép toán tương ứng
rồi lưu lại vào stack.
3.Chạy hết length of Hau_to thì trả về phần tử còn lại trong stack.
*/
int Calculator(Stack *stack, char pheptoan)
{
    int ketqua;
    DT a, b;
    b = Pop(stack);
    a = Pop(stack);
    switch (pheptoan)
    {
    case '+':
        ketqua = a.toanhang + b.toanhang;
        break;
    case '-':
        ketqua = a.toanhang - b.toanhang;
        break;
    case '*':
        ketqua = a.toanhang * b.toanhang;
        break;
    case '/':
        ketqua = a.toanhang / b.toanhang;
        break;
    }
    return ketqua;
}
int HT_Calculator(char *Hau_to)
{
    Stack stack;
    Stack_Init(&stack);
    DT temp;
    int length = strlen(Hau_to);
    for (int i = 0; i < length; i++)
    {
        char c = Hau_to[i];
        if (c == ' ')
            continue;
        else if (c > '0' && c < '9')
        {
            temp.toanhang = c - '0';
            Push(&stack, temp);
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            temp.toanhang = Calculator(&stack, c);
            Push(&stack, temp);
        }
    }
    temp = Pop(&stack);
    return temp.toanhang;
}