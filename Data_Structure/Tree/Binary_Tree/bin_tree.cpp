#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

struct node {
    char info;
    node *left;
    node *right;
};
typedef node node;
void preorder(node *T) {
    if(T) {
        printf("%2c", T->info);
        preorder(T->left);
        preorder(T->right);
    }
}

void inorder(node *T) {
    if(T) {
        inorder(T->left);
        printf("%2c", T->info);
        inorder(T->right);
    }
}

void postorder(node *T) {
    if(T) {
        postorder(T->left);
        postorder(T->right);
        printf("%2c", T->info);
    }
}

node *taonut(char ch) {
    node *p = (node*) malloc(sizeof(node));
    p->info = ch;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int main() {
    node *T, *p;
    T = taonut('A');
    p = T->left = taonut('B');
    T->right = taonut('C');
    p->right = taonut('E');
    p->right->left = taonut('D');
    preorder(T);
    puts("\n");
    inorder(T);
    puts("\n");
    postorder(T);
    puts("\n");
    return 0;
}