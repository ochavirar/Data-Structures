#include "dataTypes.h"
#include <stdlib.h>
#include <string.h>

TYPE charCreate(char data)
{
    char *ptr = malloc(sizeof(char));
    *ptr = data;
    return ptr;
}

TYPE intCreate(int data)
{
    int *ptr = malloc(sizeof(int));
    *ptr = data;
    return ptr;
}

TYPE doubleCreate(double data)
{
    double *ptr = malloc(sizeof(double));
    *ptr = data;
    return ptr;
}

TYPE floatCreate(float data)
{
    float *ptr = malloc(sizeof(float));
    *ptr = data;
    return ptr;
}

TYPE longCreate(long data)
{
    long *ptr = malloc(sizeof(long));
    *ptr = data;
    return ptr;
}

TYPE stringCreate(char *data)
{
    int length = strlen(data);
    char *ptr = malloc(length);
    strcpy(ptr, data);
    return ptr;
}
