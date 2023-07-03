#include <stdio.h>
#include <stdlib.h>

// Declaring queue initial declaration
struct queue
{
    int size;
    int frontEnd; // use when removing the element
    int backEnd;  // use when inserting an element
    int *arr;
};

// Traversal for printing the elements
void traversal(struct queue *q)
{
    for (int i = q->frontEnd; i <= q->backEnd; i++)
    {
        printf("Element :- %d\n", q->arr[i]);
    }
}

// code for checking whether queue is empty or full
int isEmpty(struct queue *q)
{
    if (q->frontEnd == q->backEnd)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->backEnd == q->size - 1)
    {
        return 1;
    }
    return 0;
}

// Code for insertion :- Enqueue
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is Full / overloaded\n");
    }
    else
    {
        q->backEnd = q->backEnd + 1;
        q->arr[q->backEnd] = value;
    }
}

// Code for deletion :- Dequeue
int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        return a;
    }
    else
    {
        q->frontEnd++;
        a = q->arr[q->frontEnd];
        return a;
    }
}

// Main Program
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->frontEnd = q->backEnd = -1;
    q->arr = (int *)malloc(q->size * sizeof(int)); // Declared initial requirements

    // checking queue is empty or not
    printf("Stack is empty : %d\n", isEmpty(q));
    printf("Stack is full : %d\n", isFull(q));

    // inserting values
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 43);
    enqueue(q, 35);
    enqueue(q, 87);
    enqueue(q, 46);
    enqueue(q, 23);
    enqueue(q, 76);
    enqueue(q, 56);
    enqueue(q, 98);
    traversal(q);
    printf("Dequeued element is : %d\n", dequeue(q));
    printf("Dequeued element is : %d\n", dequeue(q));
    printf("Dequeued element is : %d\n", dequeue(q));
    printf("Dequeued element is : %d\n", dequeue(q));
    printf("Dequeued element is : %d\n", dequeue(q));
    printf("Dequeued element is : %d\n", dequeue(q));

    return 0;
}