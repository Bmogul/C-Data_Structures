#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int value;
    struct Node *next;
    //Node *before;
};

struct Node* create(int value)
{
    struct Node *root;
    root = (struct Node*)malloc(sizeof(struct Node));
    root->value = value;
    root->next = NULL;
    return root;
}

void add(int value, struct Node *root)
{

    if (root == NULL)
    {
        printf("Invalid root node\n");
        return;
    }
    
    struct Node *temp;
    temp = root;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->value = value;
    newNode->next = NULL;

    temp->next = newNode;
}

void printList(struct Node *root)
{
    struct Node *temp;
    temp = root;
    int i = 0;
    while(temp!=NULL)
    {
        printf("Node %d: %d\n", i++, temp->value);
        temp = temp->next;
        
    }
}

int main()
{

    struct Node *root;
    int n = 5;

    root = create(0);
    
    add(1,root);
    
    for(int i = 0; i < 10; i++)
        add(i, root);
    printList(root);
    return 0;
}