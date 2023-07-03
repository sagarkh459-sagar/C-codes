#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Pushing an element
void Push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

// Poping an element
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}

// Peeking an element
int Peek(struct stack *ptr, int index)
{
    if (isEmpty(ptr))
    {
        printf("stack is empty");
    }
    else
    {
        return ptr->arr[index];
    }
}

// top of stack
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

// lowest member of stack
int stackDown(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Check if stack is empty
    printf("The stack is Empty : %d\n", isEmpty(s));

    // Pushing an element
    Push(s, 7);
    Push(s, 11);
    Push(s, 13);
    Push(s, 19);
    Push(s, 24);
    printf("The stack is full : %d\n", isFull(s));

    // Poping an element
    // printf("Popped elememnt : %d\n", pop(s));
    // printf("Popped elememnt : %d\n", pop(s));
    // printf("Popped elememnt : %d\n", pop(s));
    // printf("Popped elememnt : %d\n", pop(s));
    // printf("Popped elememnt : %d\n", pop(s));
    // printf("The stack is Empty : %d\n", isEmpty(s));

    // Peeking the element
    for (int i = 0; i < s->size; i++)
    {
        printf("peeked element on index %d is : %d\n", i, Peek(s, i));
    }

    printf("The top element of stack is : %d\n", stackTop(s));
    printf("The lowest element of stack is : %d\n", stackDown(s));

    return 0;
}