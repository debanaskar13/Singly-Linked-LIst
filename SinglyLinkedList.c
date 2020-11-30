#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    // allocate node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // Make next of new node as head
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
};

void insertAfter(struct Node *prev_node, int new_data)
{
    // check if the given prev_node is NULL
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    // allocate the node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // Make next of the node as next of the previous node
    new_node->next = prev_node->next;

    // move the next of prev_node as new_node
    prev_node->next = new_node;
};

void append(struct Node **head_ref, int new_data)
{
    // allocate the node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    struct Node *temp = *head_ref;

    // put in the data
    new_node->data = new_data;

    // this new node is going to be a last node ,so make next of it as NULL
    new_node->next = NULL;

    // if the Linked List is empty then make the new node as head
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    // Else traverse till the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // change the next of last node
    temp->next = new_node;
    return;
};

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ->", node->data);
        node = node->next;
    }
};

int main()
{
    struct Node *head = NULL;

    append(&head, 6);

    push(&head, 7);

    push(&head, 1);

    append(&head, 4);

    insertAfter(head->next, 8);

    printf("\n Created Linked List is : ");
    printList(head);

    return 0;
}