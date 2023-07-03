#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f;
    int r;
    int size;
    int *arr;
};
// check for queue is empty or not
int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
// check for queue is full or not
int isFull(struct queue *q)
{
    if (q->f == q->size - 1)
    {
        return 1;
    }
    return 0;
}
// Enqueue from rear---
void enqueueR(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = value;
        printf("Enqueued element from Rear : %d\n", value);
    }
}
// Dequeue from front ----------
int dequeueF(struct queue *q)
{
    int del = -1;

    if (isEmpty(q))
    {
        printf("Queue is Empty\t");
    }
    else
    {
        q->f = q->f + 1;
        del = q->arr[q->f];
    }
    return del;
}
// enqueue from front-----------
void enqueueF(struct queue *q, int value)
{
    if (q->f == -1)
    {
        printf("No position is free for insertion\n");
    }
    else
    {
        q->arr[q->f] == value;
        q->f = q->f - 1;
        printf("Enqueued element is : %d", value);
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 10;
    q->arr = (int *)malloc(q->size * sizeof(int));
    q->f = q->r = -1;

    printf("Queue is Empty : %d\n", isEmpty(q));
    printf("Queue is Full : %d\n", isFull(q));
    enqueueR(q, 5);
    enqueueR(q, 9);
    enqueueR(q, 13);
    printf("Deleted element is : %d\n", dequeueF(q));
    // printf("Deleted element is : %d\n", dequeueF(q));
    // printf("Deleted element is : %d\n", dequeueF(q));
    enqueueF(q, 15);
    return 0;
}