#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define MAX_STACK 100
#define BOTTOM -1
int stack[MAX_STACK];
int top = BOTTOM;
int IsEmpty()
{
    return (top == BOTTOM);
}
int IsFull()
{
    return (top == MAX_STACK - 1);
}
void Push(int value)
{
    if (IsFull())
    {
        puts("\nStack day!");
        return;
    }
    top++;
    stack[top] = value;
}
int Peek()
{
    return stack[top];
}
void Pop()
{
    if (IsEmpty())
    {
        puts("\nStack rong!");
    }
    else
    {
        printf("%d", stack[top]);
        top--;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    while (1)
    {
        temp = n % 10;
        Push(temp);
        n /= 10;
        if (n / 10 == 0)
        {
            Push(n);
            break;
        }
    }
    while (!IsEmpty())
    {
        Pop();
    }
    return 0;
}