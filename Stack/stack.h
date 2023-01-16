#include "../dataTypes.h"

#ifndef STACK_H_
#define STACK_H_

struct STR_STACK_NODE
{
    TYPE data;
    struct STR_STACK_NODE *prev;
};

typedef struct STR_STACK_NODE *STACK_NODE;

struct STR_STACK
{
    int size;
    struct STR_STACK_NODE *top;
};

typedef struct STR_STACK *STACK;

/// @brief Stack functions
STACK stackCreate();
void stackDelete(STACK);
boolean stackIsEmpty(STACK stack);
TYPE stackPop(STACK);
TYPE stackPeek(STACK);
void stackPush(STACK, TYPE);
void fixTopNode(STACK, STACK_NODE);
void addNodeAndIncreaseSize(STACK, STACK_NODE, TYPE);
void initializeStack(STACK);
#endif