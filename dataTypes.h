/**
 *  This file contains the definition of some C primitives that will be used 
 *  to be stored in some data structures using void pointers to attribute a generic
 *  capabcity.
 * **/

//Macros to visualize data
#define char_val(e) (*((char *)e))
#define int_val(e) (*((int *)e))
#define double_val(e) (*((double *)e))
#define float_val(e) (*((float *)e))
#define long_val(e) (*((long *)e))
#define string_val(e) (e)

//Functions definition
#ifndef DATA_TYPES_H_
#define DATA_TYPES_H_

typedef enum{FALSE=0, TRUE} boolean;
//Pointer holder for every type
typedef void *TYPE;

//Primitives functions 
TYPE charCreate(char);
TYPE intCreate(int);
TYPE doubleCreate(double);
TYPE floatCreate(float);
TYPE longCreate(long);
TYPE stringCreate(char *);

#endif
