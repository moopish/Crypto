#ifndef BIGINT_C_H
#define BIGINT_C_H

#include <stdint.h>

/**
 * Define struct bigint as bigint for ease of use
 */
typedef struct bigint bigint;

/**
 * bigint structure
 ** * * * * * * * * *
    * uint8_t  attributes - represents the attributes of the integer,
    *                      high bit is sign, low 3 represent the last
    *                      position in the highest valued byte
    * uint32_t length     - the length of the byte array
    * uint8_t  words      - the bytes that represent the integer  
    */
struct bigint {
   uint8_t   attributes;
   uint32_t  length; 
   uint8_t*  words;
};

void init_bigint(bigint* i);
void init_bigint_int8(bigint* i, int8_t);
void init_bigint_uint8(bigint* i, uint8_t);
void init_bigint_int16(bigint* i, int16_t);
void init_bigint_uint16(bigint* i, uint16_t);
void init_bigint_int32(bigint* i, int32_t);
void init_bigint_uint32(bigint* i, uint32_t);
void init_bigint_int64(bigint* i, int64_t);
void init_bigint_uint64(bigint* i, uint64_t);

#endif
