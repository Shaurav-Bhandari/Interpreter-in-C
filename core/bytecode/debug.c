
#include <stdint.h>
#include <stdio.h>
#include "../../headers/bytecode/debug.h"

static int simpleInstruction(const char* name, int offset)
{
    printf("%s\n", name);
    return offset + 1;
}

void disassambleChunk(Chunk *chunk, const char *name)
{
    printf("== %s == \n", name);

    for (int offset = 0; offset < chunk->count;){
        offset = disassambleInstruction(chunk, offset);
    }
}

int disassambleInstruction(Chunk *chunk, int offset)
{
    printf("%04d", offset);

    uint8_t instruction = chunk->code[offset];
    switch (instruction) {
        case OP_RETURN:
            return simpleInstruction("OP_RETURN ", offset);
        default:
            printf("Unknown opcode %d\n", instruction);
            return offset - 1;
    
    }
}
