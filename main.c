#include <stdio.h>
#include "headers\\bytecode\\chunk.h"
#include "headers/bytecode/common.h"
#include "headers/bytecode/debug.h"

int main(int argc, const char * argv[]){
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassambleChunk(&chunk, "test-chunk");
    freeChunk(&chunk);
    return 0;
}
