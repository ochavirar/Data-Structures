#include <stdio.h>
#include <stdlib.h>
#include "dataTypes.h"

int main(void)
{
    //Int example
    TYPE newInt = charCreate(1);
    printf("%d\n", char_val(newInt));
    free(newInt);

    //Double example
    TYPE newDouble = doubleCreate(45.8987);
    printf("%f\n", double_val(newDouble));
    free(newDouble);

    //Float example
    TYPE newFloat = floatCreate(98.6);
    printf("%f\n", float_val(newFloat));
    free(newFloat);

    //Long example
    TYPE newLong = longCreate(9784365);
    printf("%ld\n", long_val(newLong));
    free(newLong);

    //String example
    TYPE newString = stringCreate("This is a test string\0");
    printf("%s\n", string_val(newString));
    free(newString);

    //Char example
    TYPE newChar = charCreate('a');
    printf("%c\n", char_val(newChar));
    free(newChar);

    return 0;
}