#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; //this is an type of struct node pointer and it points to this type of structures..
};

// traversed the linked list and print the elements

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for nodes in the linked list in <HEAP>

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Now link all ;;

    // link first  and second nodes
    head->data = 7;
    head->next = second;

    // link second  and third nodes
    second->data = 13;
    second->next = third;

    // link second  and third nodes
    third->data = 14;
    third->next = fourth;

    // link second  and third nodes
    fourth->data = 12;
    fourth->next = fifth;

    // Terminate the list at the fifth node
    fifth->data = 23;
    fifth->next = NULL;

    linkedListTraversal(head);
    return 0;
}