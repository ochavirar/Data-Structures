#include "stack.h"
#include <stdlib.h>

/**
 * Stack initialization by using default values like a size of 0
 * and the top node pointing to NULL
 * **/
STACK stackCreate()
{
    STACK newStack = malloc(sizeof(struct STR_STACK));
    initializeStack(newStack);
    return newStack;
}

void initializeStack(STACK newStack)
{
    newStack->size = 0;
    newStack->top = NULL;
}

/**
 * Adding a new value by considering if is the first one or any of the next
 * this means that the prev poiter and the top one will be cahnaged in a way that 
 * matches the LIFO behavior.
 * **/
void stackPush(STACK stack, TYPE data)
{
    STACK_NODE newNode = malloc(sizeof(struct STR_STACK_NODE));
    if(newNode != NULL)
    {
        fixTopNode(stack, newNode);
        addNodeAndIncreaseSize(stack, newNode, data);
    }
}

void fixTopNode(STACK stack, STACK_NODE newNode)
{
    if(stackIsEmpty(stack)) newNode->prev = NULL;
    else newNode->prev = stack->top; //If it is not empty, the new previous is the current top
}

void addNodeAndIncreaseSize(STACK stack, STACK_NODE newNode, TYPE data)
{
    newNode->data = data;
    stack->top = newNode;
    stack->size++;
}

/**
 * This method returns the top of the stack and deletes it too.
 * **/
TYPE stackPop(STACK stack)
{
    STACK_NODE tmp = stack->top;
    TYPE value = NULL;
    if(tmp != NULL) destroyStackValue(value, tmp, stack);
    else return NULL;
    return value;
}

void destroyStackValue(TYPE value, STACK_NODE tmp, STACK stack)
{
    value = tmp->data;
    stack->top = tmp->prev;
    free(tmp);
    stack->size--;
}

/**
 * This method returns the top of the stack without deleting it completely.
 * **/
TYPE stackPeek(STACK stack)
{
    TYPE value = NULL;
    if(stack->top != NULL) value = stack->top->data;
    else return NULL;
    return value;
}

/**
 * This metod deletes all of the stack nodes and finally the stack itself
 * **/
void stackDelete(STACK stack)
{   
    while(!stackIsEmpty(stack)) stackPop(stack);
    free(stack);
}

/**
 * Self-explanatory support function
 * **/
boolean stackIsEmpty(STACK stack)
{
    return stack->size == 0;
}
