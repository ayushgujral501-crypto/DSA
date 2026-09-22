#include <stdio.h>

int stack[100];
int top = -1;

void push(int value)
{
    if (top == 99)
        return;

    stack[++top] = value;
}

void display(int i)
{
    if (i < 0)
        return;

    printf("%d ", stack[i]);
    display(i - 1);
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display(top);

    return 0;
}