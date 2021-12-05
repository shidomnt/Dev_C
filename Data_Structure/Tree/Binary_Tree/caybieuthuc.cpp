#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
struct node {
    char kt;
    int giatri;
    node *left;
    node *right;
};
typedef node node;

node *taonut(char ch, int value) {
    node *p = (node*) malloc(sizeof(node));
    p->kt = ch;
    p->giatri = value;
    p->left = p->right = NULL;
    return p;
}

int main() {

    return 0;
}