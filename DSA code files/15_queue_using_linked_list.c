#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int value)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("Queue is full");
    }
    else
    {
        new->data = value;
        new->next = NULL;
        if (f == NULL)
        {
            f = r = new;
        }
        else
        {
            r->next = new;
            r = new;
        }
    }
}

int dequeue()
{
    int n = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\t");
    }
    else
    {
        f = f->next;
        n = ptr->data;
        free(ptr);
    }
    return n;
}

int main()
{
    enqueue(12);
    enqueue(15);
    enqueue(17);
    enqueue(23);
    enqueue(28);
    traversal(f);

    printf("Dequeud element = %d\n", dequeue());
    printf("Dequeud element = %d\n", dequeue());
    printf("Dequeud element = %d\n", dequeue());
    printf("Dequeud element = %d\n", dequeue());
    printf("Dequeud element = %d\n", dequeue());
    printf("Dequeud element = %d\n", dequeue());

    return 0;
    //
}