#include <stdio.h>
#include "common.h"
#include "chunk.h"
#include "debug.h"

int main () 
{
    Chunk c;
    init_chunk(&c);
    write_chunk(&c, OP_RETURN);
    diassembleChunk(&c,"OP_RETURN"); 
    free_chunk(&c);
}
