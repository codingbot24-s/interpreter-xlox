#include <stdio.h>
#include "common.h"
#include "chunk.h"


int main () 
{
    Chunk c;
    init_chunk(&c);
    riteChunk(&c, OP_RETURN);
    freeChunk(&c);
}
