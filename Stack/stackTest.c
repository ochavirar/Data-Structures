#include "stack.h"
#include "../dataTypes.h"
#include <stdio.h>

int main(void)
{
    STACK s = stackCreate();
    TYPE data = intCreate(1);
    TYPE data2 = intCreate(2);
    stackPush(s, data);
    stackPush(s, data2);
    stackDelete(s);
    return 0;
}