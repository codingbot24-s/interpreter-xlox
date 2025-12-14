
#include <stdlib.h>
#include "chunk.h"

void init_chunk (Chunk *c) 
{
    c->count = 0;
    c->capacity = 0;
    c->code = NULL; 
}

void write_chunk (Chunk *c,uint8_t byte) 
{
    if (c->capacity < c->count + 1)
    {
        int old_cap = c->capacity;
        c->capacity = GROW_CAPACITY();
        c->code =  GROW_ARRAY();
    }
    
    c->code[c->count] = byte;
    c->count++;    
}



void free_chunk(Chunk *c)
{
    //TODO: (saad) -> 
    initChunk(c);
}