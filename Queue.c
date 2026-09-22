#include <stdio.h>

int queue[100];
int front = 0;
int rear = -1;

void enqueue(int value)
{
    queue[++rear] = value;
}

void display(int i)
{
    if (i > rear)
        return;

    printf("%d ", queue[i]);
    display(i + 1);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display(front);

    return 0;
}