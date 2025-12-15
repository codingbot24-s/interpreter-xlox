
#ifndef xlox_debug_h
#define xlox_debug_h

#include "chunk.h"

void diassembleChunk(Chunk* c,const char *name);
int disassembleInstruction(Chunk* c, int offset);
#endif