#ifndef CRYPTO_UTIL_C_H
#define CRYPTO_UTIL_C_H

#include <stdbool.h>
#include <stdint.h>

static inline uint8_t byte_clear_bit(uint8_t byte, unsigned int position) {
   return (byte & (~(1 << position)));
}

static inline bool byte_get_bit(uint8_t byte, unsigned int position) {
   return ((byte & (1 << position)) >> position);
} 

static inline uint8_t byte_set_bit(uint8_t byte, unsigned int position) {
   return (byte | (1 << position));
}

#define MAX_FUN { return (a > b ? a : b); }

static inline int8_t   max_8   (int8_t   a, int8_t   b) MAX_FUN
static inline uint8_t  max_u8  (uint8_t  a, uint8_t  b) MAX_FUN
static inline int16_t  max_16  (int16_t  a, int16_t  b) MAX_FUN
static inline uint16_t max_u16 (uint16_t a, uint16_t b) MAX_FUN
static inline int32_t  max_32  (int32_t  a, int32_t  b) MAX_FUN
static inline uint32_t max_u32 (uint32_t a, uint32_t b) MAX_FUN
static inline int64_t  max_64  (int64_t  a, int64_t  b) MAX_FUN
static inline uint64_t max_u64 (uint64_t a, uint64_t b) MAX_FUN
static inline float    max_f   (float    a, float    b) MAX_FUN
static inline double   max_d   (double   a, double   b) MAX_FUN

#undef MAX_FUN

#define MIN_FUN { return (a < b ? a : b); }

static inline int8_t   min_8   (int8_t   a, int8_t   b) MIN_FUN
static inline uint8_t  min_u8  (uint8_t  a, uint8_t  b) MIN_FUN
static inline int16_t  min_16  (int16_t  a, int16_t  b) MIN_FUN
static inline uint16_t min_u16 (uint16_t a, uint16_t b) MIN_FUN
static inline int32_t  min_32  (int32_t  a, int32_t  b) MIN_FUN
static inline uint32_t min_u32 (uint32_t a, uint32_t b) MIN_FUN
static inline int64_t  min_64  (int64_t  a, int64_t  b) MIN_FUN
static inline uint64_t min_u64 (uint64_t a, uint64_t b) MIN_FUN
static inline float    min_f   (float    a, float    b) MIN_FUN
static inline double   min_d   (double   a, double   b) MIN_FUN

#undef MIN_FUN

#endif
