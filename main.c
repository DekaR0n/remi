#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

struct Node *root = NULL;


void push(Node **root, int data) {
    Node *temp = (Node *) malloc(sizeof(Node));
    temp->value = data;
    temp->next = (*root);
    (*root) = temp;
}

int pop(Node **root) {
    Node *prev = NULL;
    int val;
    if (root == NULL) {
        exit(-1);
    }
    prev = (*root);
    val = prev->value;
    (*root) = (*root)->next;
    free(prev);
    return val;
}

Node *getElement(Node *root, int n) {
    int counter = 0;
    while (counter < n && root) {
        root = root->next;
        counter++;
    }
    return root;
}

int main() {
    Node *node = NULL;
    push(node, 4);
    push(node, 6);
    push(node, 3);
    return 0;
}
