#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    struct node *before;
};

struct node* create(int val)
{
    struct node *root;
    root = (struct node*)malloc(sizeof(struct node));
    root->value = val;
    root->next=NULL;
    root->before=NULL;
}

struct node* add(int val, struct node *root)
{
    if(root == NULL)
    {
        printf("Root is NULL");
        return NULL;
    }
    struct node *temp, *newNode;
    temp = root;

    while(temp->next!=NULL)
        temp = temp->next;

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = val;
    newNode->before = temp;
    newNode->next = NULL;
    temp->next = newNode;
    return newNode;
}

void printForward(struct node *root)
{
    if(root == NULL)
    {
        printf("Root is NULL");
        return;
    }
    struct node *temp;
    temp = root;
    while(temp != NULL)
    {
        printf("Node value: %d\n", temp->value);
        temp = temp->next;
    }
}

void printBackward(struct node *node)
{
    if(node == NULL)
    {
        printf("Root is NULL");
        return;
    }
    struct node *temp;
    temp = node;
    while(temp != NULL)
    {
        printf("Node value: %d\n", temp->value);
        temp = temp->before;
    }
}

int main()
{

    struct node *root;
    root = create(5);
    add(1, root);
    add(3, root);
    struct node *temp = add(1, root);

    printForward(root);
    printf("\n");
    printBackward(temp);

    return 0;
}