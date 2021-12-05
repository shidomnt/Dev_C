#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
typedef struct Node{
    int dia;
    struct Node *next;
}Node;
typedef struct Stack{
    Node *top;
}Stack;
void Stack_Init(Stack *stack){
    stack->top=NULL;
}
int isempty(Stack *stack){
    return (stack->top == NULL);
}
Node *Create_Node(int value){
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->dia = value;
    new_node->next = NULL;
    return new_node;
}
void Push(Stack *stack,int value){
    Node *new_node = Create_Node(value);
    if(isempty(stack)){
        stack->top = new_node;
    }
    else{
        new_node->next = stack->top;
        stack->top = new_node;
    }
}
int Pop(Stack *stack){
    int temp = stack->top->dia;
    Node *r = stack->top;
    stack->top = stack->top->next;
    free(r);
    return temp;
}
int Peek(Stack stack){
    return stack.top->dia;
}
void Init_Thap(Stack *Khoidau,int n){
    for(int i=n;i>=1;i--){
        Push(Khoidau,i);
    }
}
int Phu_hop(Stack ,int pos){
    
}
//Có n đĩa đánh số từ 1 - n
void Thap_Ha_Noi(int n){
    Stack Thap;
    
}
int main() {
    return 0;
}