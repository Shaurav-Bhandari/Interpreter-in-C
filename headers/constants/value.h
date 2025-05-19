#ifndef clox_value_h

#define clox_value_h

#include "../bytecode/common.h"

typedef double Value;

typedef struct ValueArray {
    int capacity;
    int count;
    Value* values;
} ValueArray; 

void initValueArray(ValueArray* arr);
void writeValueArray(ValueArray* arr, Value val);
void freeValueArray(ValueArray* arr);

#endif // !clox_value_h

