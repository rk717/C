#include <stdio.h>
#include <stdlib.h>

//A link list node
struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    //1.allocate the node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //2.put in the data
    new_node->data = new_data;

    //3.make next of new mode as head
    new_node->next = (*head_ref);

    //4.move the head to point to the new node
    (*head_ref) = new_node;

}

void insertAfter(struct Node* prev_node, int new_data)
{
    //1.check if the give prev_node is NULL
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return; 
    }

    //2.allocate the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //3.put in the data
    new_node->data = new_data;

    //4.make next of new node as next of pre_node
    new_node->next = prev_node->next;

    //5.move the next of pre_node as new_node
    prev_node->next = new_node;
}

void append(struct Node** head_ref, int new_data)
{
    //1.allocate node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    //2.put in the data
    new_node->data = new_data;

    //3.this new node is going to be the last node, so make next of it as NULL
    new_node->next = NULL;

    //4. if the linked list is empty, then make the new node as head
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //5. Else traverse till the last node
    struct Node* last = *head_ref;
    while(last->next != NULL)
    {
        last = last->next; 
    }

    //6.change the next of last node
    last->next = new_node;

}

//print the linked list
void printList(struct Node* node)
{
    while(node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
}

int main()
{
    //start with the empty list
    struct Node* head = NULL;

    //Insert 6, so linked list becomes 6->NULL
    append(&head, 6);

    //Insert 7 at the beginnign, so linked list becomes 7->6->NuLL
    push(&head, 7);

    //Insert 1 at the beginning, so linked list becomes 1->7->6->NULL
    push(&head, 1);

    //Insert 4 at the end. so linked list becomes 1->7->6->4->NuLLl
    append(&head, 4);

    //Insert 8, after 7. so linked list becomes 1->7->8->6->4->NULL
    insertAfter(head->next, 8);


    printf("Created Linked list is: ");
    printList(head);

    return 0; 
}