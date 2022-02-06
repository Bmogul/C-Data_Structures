#include <stdio.h>
#include <stdlib.h>

// LIFO

struct StackNode
{
    int value;
    struct StackNode *next;
};

struct StackNode* createNode(int val)
{
    struct StackNode *temp = (struct StackNode*)malloc(sizeof(struct StackNode*));
    temp->value = val;
    temp->next = NULL;
    return temp;
}

void push(struct StackNode *root)
{
    
}

int main()
{
    return 0;
}