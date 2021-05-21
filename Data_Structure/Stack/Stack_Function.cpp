#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
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
    Node top;
} Stack;
Node Create_Node(DT data);
void Stack_Init(Stack *stack);
int StackEmpty(Stack *stack);
void Push(Stack *stack, DT data);
DT Pop(Stack *stack);
int main() {



    return 0;
}
Node Create_Node(DT data)
{
    Node new_node = (Node)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void Stack_Init(Stack *stack)
{
    stack->top = NULL;
}
int Stack_Empty(Stack *stack)
{
    return (stack->top == NULL);
}
void Push(Stack *stack, DT data)
{
    Node new_node = Create_Node(data);
    if (Stack_Empty(stack))
    {
        stack->top = new_node;
    }
    else
    {
        new_node->next = stack->top;
        stack->top = new_node;
    }
}
DT Pop(Stack *stack)
{
    DT data = stack->top->data;
    Node q = stack->top;
    stack->top = stack->top->next;
    q->next = NULL;
    free(q);
    return data;
}