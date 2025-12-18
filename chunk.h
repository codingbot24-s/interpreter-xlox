#ifndef xlox_chunk_h
#define xlox_chunk_h

#include "common.h"
#include "value.h"

typedef enum 
{

    OP_RETURN,

}OP_CODE;

typedef struct 
{
    int     count;
    int     capacity;
    uint8_t *code;
    ValueArray constants;

}Chunk;


void init_chunk (Chunk *c);
void write_chunk (Chunk *c,uint8_t byte); 
int addConstant(Chunk* c,Value value);
void free_chunk(Chunk *c);

#endif


