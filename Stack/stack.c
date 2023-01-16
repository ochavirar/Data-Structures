#include "stack.h"
#include <stdlib.h>

STACK stackCreate()
{
    STACK newStack = malloc(sizeof(struct STR_STACK));
    newStack->size = 0;
    newStack->top = NULL;
    return newStack;
}

void stackPush(STACK stack, TYPE data)
{
    STACK_NODE newNode = malloc(sizeof(struct STR_STACK_NODE));
    if(newNode != NULL)
    {
        if(stack->size == 0) newNode->prev = NULL;
        else newNode->prev = stack->top;
        newNode->data = data;
        stack->top = newNode;
        stack->size++;
    }
}

TYPE stackPop(STACK stack)
{
    STACK_NODE tmp = stack->top;
    TYPE value = NULL;
    if(tmp != NULL)
    {
        value = tmp->data;
        stack->top = tmp->prev;
        free(tmp);
        stack->size--;
    }
    return value;
}

TYPE stackPeek(STACK stack)
{
    TYPE value = NULL;
    if(stack->top != NULL)
        value = stack->top->data;
    return value;
}

void stackDelete(STACK stack)
{   
    while(!stackIsEmpty(stack))
        stackPop(stack);
    free(stack);
}

boolean stackIsEmpty(STACK stack)
{
    return stack->size == 0;
}

