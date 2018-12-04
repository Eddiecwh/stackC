/*  cs270_hw7
    Eddie Chan
    stack270.c
    Stack function(s) definition */

#include "stack270.h"
#include <stdio.h>
#include <malloc/_malloc.h>

struct stack270 initStack(int size) {
    struct stack270 *stk = (struct stack270*)malloc(sizeof(struct stack270));
    stk->topIndex = -1;
    // Don't return NULL just keep contents as NULL
    stk->contents = (int*)malloc(sizeof(int)*size);
    stk->max = size;
    return *stk;
}

int push(struct stack270 *stk, int value) {
    int item; 
    // If stack's tops equal to last index then stack is full
    if (stk->topIndex == stk->max-1) {
        printf("Stack is full\n");
        return -1;
    } else {
        stk->contents[++stk->topIndex] = value;
        printf("Your value: %d, has been pushed onto the stack\n", value);
        return 0;
    }
}

int pop(struct stack270 *stk) {
    int item;
    if (stk->topIndex == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        item = stk->contents[stk->topIndex--];
        printf("%d has been popped\n", item);
        return 0;
    }
}

/*
int peek(struct stack270 *stk, int *value) {
    int topItem;
    if (stk->topIndex == -1) {
        printf("Stack is empty\n");
        return 0;
    } else {
        stk->contents[stk->topIndex] = topItem;
    }
} 
*/

int dup(struct stack270 *stk) {
    int dupItem;
    if (stk->topIndex == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        dupItem = stk->contents[stk->topIndex];
        stk->contents[++stk->topIndex] = dupItem;
        printf("Your duplicate item: %d has been pushed onto the stack\n", dupItem);
        return 0;
    }
}

/* Stuff coming in Part 2 */

// add()
// freeStack(struct stack270) - resets to unitialized condition (top = -1, max = 0, free contents) 



