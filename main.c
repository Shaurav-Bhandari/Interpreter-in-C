#include <stdio.h>
#include "headers/common.h"
#include "headers/chunk.h"
#include "headers/debug.h"

int main(int argc, const char * argv[]){
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    disassambleChunk(&chunk, "test-chunk");
    freeChunk(&chunk);
    return 0;
}
