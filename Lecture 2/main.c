#include <stdio.h>
#include <stdlib.h>
#define size 5

struct stack {
    int a[size];
    int top;
};

// Push function to add an element to the stack
void push(struct stack *s, int ele) {
    if (s->top == size - 1) {
        printf("Stack Overflow\n");
    } else {
        s->top++;
        s->a[s->top] = ele;
    }
}

// Print function to display elements of the stack
void print(struct stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->a[i]);
        }
    }
}

int main() {
    struct stack s1 = {
        .top = -1  // Initialize top to -1 to indicate an empty stack
    };

    // Push elements onto the stack
    push(&s1, 1);
    push(&s1, 2);
    push(&s1, 4);
    push(&s1, 5);
    push(&s1, 12);
    push(&s1, 8); // This will trigger "Stack Overflow"

    // Print the stack
    print(&s1);

    return 0;
}
