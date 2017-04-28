#include "bigint.h"
#include "../util.h"

#include <stdlib.h>

struct bigint {
   uint8_t   attributes;
   uint32_t  length; 
   uint8_t*  words;
};

static inline uint8_t* __NEW_ARR(uint32_t len) {
   return ((uint8_t*)calloc(len * sizeof(uint8_t)));
}

void init_bigint(bigint* i)
{
   i->attributes = 0;
   i->length = 1;
   i->words = __NEW_ARR(1);
}

void init_bigint_int8(bigint* i, int8_t i)
{
   i->attributes = byte_get_bit(i, 7);
   i->length = 1;
   i->words = __NEW_ARR(1);
   i->words[0] = i & 0x7F;
}

void init_bigint_uint8(bigint* i, uint8_t i)
{
   i->attributes = 0;
   i->length = 1;
   i->words = __NEW_ARR(1);
   i->words[0] = i;
}

void init_bigint_int16(bigint* i, int16_t i)
{
   i->attributes = byte_get_bit(i >> 8, 7);
   i->length = 2;
   i->words = __NEW_ARR(2);
   i->words[0] = i & 0xFF;
   i->words[1] = (i >> 8) & 0x7F;
}

void init_bigint_uint16(bigint* i, uint16_t i)
{ 
   i->attributes = 0;
   i->length = 2;
   i->words = __NEW_ARR(2);
   i->words[0] = i & 0xFF;
   i->words[1] = (i >> 8) & 0xFF;
}

void init_bigint_int32(bigint* i, int32_t i)
{
   i->attributes = byte_get_bit(i >> 24, 7);
   i->length = 4;
   i->words = __NEW_ARR(4);
   i->words[0] = i & 0xFF;
   i->words[1] = (i >> 8) & 0xFF;
   i->words[2] = (i >> 16) & 0xFF;
   i->words[3] = (i >> 24) & 0x7F;
}

void init_bigint_uint32(bigint* i, uint32_t i)
{
   i->attributes = 0;
   i->length = 4;
   i->words = __NEW_ARR(4);
   i->words[0] = i & 0xFF;
   i->words[1] = (i >> 8) & 0xFF;
   i->words[2] = (i >> 16) & 0xFF;
   i->words[3] = (i >> 24) & 0xFF;
}

void init_bigint_int64(bigint* i, int64_t i)
{

}

void init_bigint_uint64(bigint* i, uint64_t i)
{
   i->attributes = 0;
   i->words = __NEW_ARR(i->length = 8);
   
   i->words[0] = i & 0xFF;
   i->words[1] = (i >> 8) & 0xFF;
   i->words[2] = (i >> 16) & 0xFF;
   i->words[3] = (i >> 24) & 0xFF;
}

