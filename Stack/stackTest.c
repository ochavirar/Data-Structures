#include "stack.h"
#include "../dataTypes.h"
#include <stdio.h>

int main(void)
{
    STACK s = stackCreate();
    TYPE data = intCreate(1);
    TYPE data2 = intCreate(2);
    TYPE data3 = intCreate(3);
    stackPush(s, data);
    stackPush(s, data2);
    stackPush(s, data3);
    TYPE tempInt = stackPeek(s);
    printf("Value: %d\n", int_val(tempInt));
    stackPop(s);
    tempInt = stackPeek(s);
    printf("Value: %d\n", int_val(tempInt));
    stackPop(s);
    stackDelete(s);
    return 0;
}