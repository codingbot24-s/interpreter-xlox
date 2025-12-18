
#include <stdlib.h>
#include "chunk.h"
#include "memory.h"


void init_chunk (Chunk *c) 
{
    c->count = 0;
    c->capacity = 0;
    c->code = NULL;
    initValueArray(&c->constants);
}

void write_chunk (Chunk *c,uint8_t byte) 
{
    if (c->capacity < c->count + 1)
    {
        int old_cap = c->capacity;
        c->capacity = GROW_CAPACITY(old_cap);
        c->code =  GROW_ARRAY(uint8_t,c->code,old_cap,c->capacity);
    }
    
    c->code[c->count] = byte;
    c->count++;    
}

int addConstant(Chunk *c, Value value)
{
    writeValueArray(&c->constants,value);
    return c->constants.count - 1;
}

void free_chunk(Chunk *c)
{
    FREE_ARRAY(uint8_t,c->code,c->capacity);
    freeValueArray(&c->constants);
    init_chunk(c);
}




