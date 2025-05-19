#include <stdio.h>

#include "../../headers/bytecode/memory.h"
#include "../../headers/constants/value.h"

void initValueArray(ValueArray *arr)
{
    arr->values = NULL;
    arr->capacity = 0;
    arr->count = 0;
}

void writeValueArray(ValueArray *arr, Value val)
{
    if (arr->capacity < arr->count+1) {
        int oldCapicity = arr->capacity;
        arr->capacity = GROW_CAPACITY(oldCapicity);
        arr->values = GROW_ARRAY(Value, arr->values, oldCapicity, arr->capacity);

        arr->values[arr->count] = val;
        ++arr->count;
    }
}

void freeValueArray(ValueArray *arr)
{
    FREE_ARRAY(Value, arr->values, arr->capacity);
    initValueArray(arr);

}
