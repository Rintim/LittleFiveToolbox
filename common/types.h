#pragma once

#ifndef ARM9
#ifndef ARM11
#error "Unknown processor"
#endif
#endif

#define BIT(x) (1 << (x))

#ifndef __ASSEMBLER__
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#define ALIGN(n)        __attribute__((aligned(n)))
#define PACKED_ALIGN(n) __attribute__((packed, aligned(n)))
#define PACKED_STRUCT   PACKED_ALIGN(4)

#define asm_v asm __volatile__

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;

typedef volatile s8  vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
#endif
