#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int frontEnd;
    int backEnd;
    int *arr;
};

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
    if ((q->backEnd + 1) % (q->size) == q->frontEnd)
    {
        return 1;
    }
    return 0;
}

// Enqueue -> Insertion
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->backEnd = (q->backEnd + 1) % (q->size); // Circular increment
        q->arr[q->backEnd] = value;
        printf("Enqueued element = %d\n", value);
    }
}

// Dequeue -> Deletion
int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        return a;
    }
    else
    {
        q->frontEnd = (q->frontEnd + 1) % (q->size);
        a = q->arr[q->frontEnd];
        return a;
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->backEnd = q->frontEnd = 0;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Is queue is Empty :- %d\n", isEmpty(q));
    printf("Is queue is Full :- %d\n", isFull(q));

    enqueue(q, 5); // inserting values
    enqueue(q, 7);
    enqueue(q, 9);
    enqueue(q, 11);
    // enqueue(q, 15);  bcs last one is always empty.... so we can't add the last element
    printf("Deque element = %d\n", dequeue(q));
    printf("Deque element = %d\n", dequeue(q));
    printf("Deque element = %d\n", dequeue(q));
    printf("Deque element = %d\n", dequeue(q));

    enqueue(q, 25);
    enqueue(q, 35);

    return 0;
}

// In circular queue we can add size-1 element