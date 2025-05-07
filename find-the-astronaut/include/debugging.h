#ifndef DEBUGGING_H
#define DEBUGGING_H

#include "types.h"


#define RESET_TEXT "\x1b[22m"
#define BOLD_TEXT  "\x1b[1m"


#define DEFAULT_COLOR_TEXT   "\x1b[0m"

#define BLUE_COLOR_TEXT      "\x1b[38;5;51m"
#define BLUE_COLOR_BG        "\x1b[30;48;5;51m"

#define YELLOW_COLOR_TEXT    "\x1b[38;5;220m" // 38;5;178m" // 38;5;226m"
#define YELLOW_COLOR_BG

#define GREEN_COLOR_TEXT     "\x1b[32m" // 38;5;46m"
#define GREEN_COLOR_BG

#define ORANGE_COLOR_TEXT    "\x1b[38;5;208m"
#define ORANGE_COLOR_BG

#define RED_COLOR_TEXT       "\x1b[38;5;196m" // 91m"
#define RED_COLOR_BG



// ************ UNSIGNED *************
// 8bit
#define UINT8_BIN_PTTRN "%c%c%c%c%c%c%c%c"
#define UINT8_FORMAT_BIN(byte)            \
    (((uint8_t)byte) & 0x80 ? '1' : '0'), \
    (((uint8_t)byte) & 0x40 ? '1' : '0'), \
    (((uint8_t)byte) & 0x20 ? '1' : '0'), \
    (((uint8_t)byte) & 0x10 ? '1' : '0'), \
    (((uint8_t)byte) & 0x08 ? '1' : '0'), \
    (((uint8_t)byte) & 0x04 ? '1' : '0'), \
    (((uint8_t)byte) & 0x02 ? '1' : '0'), \
    (((uint8_t)byte) & 0x01 ? '1' : '0')


// 16bit
#define UINT16_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define UINT16_FORMAT_BIN(byte)              \
    (((uint16_t)byte) & 0x8000 ? '1' : '0'), \
    (((uint16_t)byte) & 0x4000 ? '1' : '0'), \
    (((uint16_t)byte) & 0x2000 ? '1' : '0'), \
    (((uint16_t)byte) & 0x1000 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0800 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0400 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0200 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0100 ? '1' : '0'), \
    \
    (((uint16_t)byte) & 0x0080 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0040 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0020 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0010 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0008 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0004 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0002 ? '1' : '0'), \
    (((uint16_t)byte) & 0x0001 ? '1' : '0')


// 32bit
#define UINT32_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define UINT32_FORMAT_BIN(byte)                  \
    (((uint32_t)byte) & 0x80000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x40000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x20000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x10000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x08000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x04000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x02000000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x01000000 ? '1' : '0'), \
    \
    (((uint32_t)byte) & 0x00800000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00400000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00200000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00100000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00080000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00040000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00020000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00010000 ? '1' : '0'), \
    \
    (((uint32_t)byte) & 0x00008000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00004000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00002000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00001000 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000800 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000400 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000200 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000100 ? '1' : '0'), \
    \
    (((uint32_t)byte) & 0x00000080 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000040 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000020 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000010 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000008 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000004 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000002 ? '1' : '0'), \
    (((uint32_t)byte) & 0x00000001 ? '1' : '0')


// 64bit
#define UINT64_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define UINT64_FORMAT_BIN(byte)                          \
    (((uint64_t)byte) & 0x8000000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x4000000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x2000000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x1000000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0800000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0400000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0200000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0100000000000000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0080000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0040000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0020000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0010000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0008000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0004000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0002000000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0001000000000000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000800000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000400000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000200000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000100000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000080000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000040000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000020000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000010000000000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000008000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000004000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000002000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000001000000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000800000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000400000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000200000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000100000000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000000080000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000040000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000020000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000010000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000008000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000004000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000002000000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000001000000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000000000800000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000400000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000200000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000100000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000080000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000040000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000020000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000010000 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000000000008000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000004000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000002000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000001000 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000800 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000400 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000200 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000100 ? '1' : '0'), \
    \
    (((uint64_t)byte) & 0x0000000000000080 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000040 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000020 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000010 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000008 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000004 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000002 ? '1' : '0'), \
    (((uint64_t)byte) & 0x0000000000000001 ? '1' : '0')



// ************ SIGNED *************
// 8bit
#define INT8_BIN_PTTRN "%c%c%c%c%c%c%c%c"
#define INT8_FORMAT_BIN(byte)            \
    (((int8_t)byte) & 0x80 ? '1' : '0'), \
    (((int8_t)byte) & 0x40 ? '1' : '0'), \
    (((int8_t)byte) & 0x20 ? '1' : '0'), \
    (((int8_t)byte) & 0x10 ? '1' : '0'), \
    (((int8_t)byte) & 0x08 ? '1' : '0'), \
    (((int8_t)byte) & 0x04 ? '1' : '0'), \
    (((int8_t)byte) & 0x02 ? '1' : '0'), \
    (((int8_t)byte) & 0x01 ? '1' : '0')


// 16bit
#define INT16_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define INT16_FORMAT_BIN(byte)              \
    (((int16_t)byte) & 0x8000 ? '1' : '0'), \
    (((int16_t)byte) & 0x4000 ? '1' : '0'), \
    (((int16_t)byte) & 0x2000 ? '1' : '0'), \
    (((int16_t)byte) & 0x1000 ? '1' : '0'), \
    (((int16_t)byte) & 0x0800 ? '1' : '0'), \
    (((int16_t)byte) & 0x0400 ? '1' : '0'), \
    (((int16_t)byte) & 0x0200 ? '1' : '0'), \
    (((int16_t)byte) & 0x0100 ? '1' : '0'), \
    \
    (((int16_t)byte) & 0x0080 ? '1' : '0'), \
    (((int16_t)byte) & 0x0040 ? '1' : '0'), \
    (((int16_t)byte) & 0x0020 ? '1' : '0'), \
    (((int16_t)byte) & 0x0010 ? '1' : '0'), \
    (((int16_t)byte) & 0x0008 ? '1' : '0'), \
    (((int16_t)byte) & 0x0004 ? '1' : '0'), \
    (((int16_t)byte) & 0x0002 ? '1' : '0'), \
    (((int16_t)byte) & 0x0001 ? '1' : '0')


// 32bit
#define INT32_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define INT32_FORMAT_BIN(byte)                  \
    (((int32_t)byte) & 0x80000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x40000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x20000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x10000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x08000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x04000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x02000000 ? '1' : '0'), \
    (((int32_t)byte) & 0x01000000 ? '1' : '0'), \
    \
    (((int32_t)byte) & 0x00800000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00400000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00200000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00100000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00080000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00040000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00020000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00010000 ? '1' : '0'), \
    \
    (((int32_t)byte) & 0x00008000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00004000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00002000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00001000 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000800 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000400 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000200 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000100 ? '1' : '0'), \
    \
    (((int32_t)byte) & 0x00000080 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000040 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000020 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000010 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000008 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000004 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000002 ? '1' : '0'), \
    (((int32_t)byte) & 0x00000001 ? '1' : '0')


// 64bit
#define INT64_BIN_PTTRN "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define INT64_FORMAT_BIN(byte)                          \
    (((int64_t)byte) & 0x8000000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x4000000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x2000000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x1000000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0800000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0400000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0200000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0100000000000000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0080000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0040000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0020000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0010000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0008000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0004000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0002000000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0001000000000000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000800000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000400000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000200000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000100000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000080000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000040000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000020000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000010000000000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000008000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000004000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000002000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000001000000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000800000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000400000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000200000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000100000000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000000080000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000040000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000020000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000010000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000008000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000004000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000002000000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000001000000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000000000800000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000400000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000200000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000100000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000080000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000040000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000020000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000010000 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000000000008000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000004000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000002000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000001000 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000800 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000400 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000200 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000100 ? '1' : '0'), \
    \
    (((int64_t)byte) & 0x0000000000000080 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000040 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000020 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000010 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000008 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000004 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000002 ? '1' : '0'), \
    (((int64_t)byte) & 0x0000000000000001 ? '1' : '0')






#if DEBUG
    #include <time.h>

    // logging
    #define INFO_LOG(_component, _fmt, ...) do {                                   \
        char time_str[100];                                                        \
        time_t rawtime;                                                            \
        struct tm* timeinfo;                                                       \
        time(&rawtime);                                                            \
        timeinfo = localtime(&rawtime);                                            \
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", timeinfo);       \
        printf("[ " BLUE_COLOR_TEXT "INFO " DEFAULT_COLOR_TEXT " ]  "              \
            BLUE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT " - ("                         \
            BLUE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") - ("                        \
            BLUE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") "                           \
            BLUE_COLOR_TEXT _fmt DEFAULT_COLOR_TEXT "\n",                          \
            time_str, __func__, _component, __VA_ARGS__);                          \
    } while(0)

    #define WARN_LOG(_component, _fmt, ...) do {                                   \
        char time_str[100];                                                        \
        time_t rawtime;                                                            \
        struct tm* timeinfo;                                                       \
        time(&rawtime);                                                            \
        timeinfo = localtime(&rawtime);                                            \
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", timeinfo);       \
        printf("[ " YELLOW_COLOR_TEXT "WARN " DEFAULT_COLOR_TEXT " ]  "            \
            YELLOW_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT " - ("                       \
            YELLOW_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") - ("                      \
            YELLOW_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") "                         \
            YELLOW_COLOR_TEXT _fmt DEFAULT_COLOR_TEXT "\n",                        \
            time_str, __func__, _component, __VA_ARGS__);                          \
    } while(0)

    #define DEBUG_LOG(_component, _fmt, ...) do {                                  \
        char time_str[100];                                                        \
        time_t rawtime;                                                            \
        struct tm* timeinfo;                                                       \
        time(&rawtime);                                                            \
        timeinfo = localtime(&rawtime);                                            \
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", timeinfo);       \
        printf("[ " GREEN_COLOR_TEXT "DEBUG" DEFAULT_COLOR_TEXT " ]  "             \
            GREEN_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT " - ("                        \
            GREEN_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") - ("                       \
            GREEN_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") "                          \
            GREEN_COLOR_TEXT _fmt DEFAULT_COLOR_TEXT "\n",                         \
            time_str, __func__, _component, __VA_ARGS__);                          \
    } while(0)

    #define ERROR_LOG(_component, _fmt, ...) do {                                  \
        char time_str[100];                                                        \
        time_t rawtime;                                                            \
        struct tm* timeinfo;                                                       \
        time(&rawtime);                                                            \
        timeinfo = localtime(&rawtime);                                            \
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", timeinfo);       \
        printf("[ " ORANGE_COLOR_TEXT "ERROR" DEFAULT_COLOR_TEXT " ]  "            \
            ORANGE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT " - ("                       \
            ORANGE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") - ("                      \
            ORANGE_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") "                         \
            ORANGE_COLOR_TEXT _fmt DEFAULT_COLOR_TEXT "\n",                        \
            time_str, __func__, _component, __VA_ARGS__);                          \
    } while(0)

    #define FATAL_LOG(_component, _fmt, ...) do {                                  \
        char time_str[100];                                                        \
        time_t rawtime;                                                            \
        struct tm* timeinfo;                                                       \
        time(&rawtime);                                                            \
        timeinfo = localtime(&rawtime);                                            \
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", timeinfo);       \
        printf("[ " RED_COLOR_TEXT "FATAL" DEFAULT_COLOR_TEXT " ]  "               \
            RED_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT " - ("                          \
            RED_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") - ("                         \
            RED_COLOR_TEXT "%s" DEFAULT_COLOR_TEXT ") "                            \
            RED_COLOR_TEXT _fmt DEFAULT_COLOR_TEXT "\n",                           \
            time_str, __func__, _component, __VA_ARGS__);                          \
    } while(0)


    // runtime checking
    #define ASSERT_FATAL(_component, _expr) do {                                       \
        if (!(_expr)) {                                                                \
            printf("\n");                                                              \
            FATAL_LOG(                                                                 \
                _component,                                                            \
                "\n" GREEN_COLOR_TEXT BOLD_TEXT "%s" RESET_TEXT DEFAULT_COLOR_TEXT ":" \
                GREEN_COLOR_TEXT BOLD_TEXT "%d" RESET_TEXT DEFAULT_COLOR_TEXT ": "     \
                GREEN_COLOR_TEXT BOLD_TEXT "%s" RESET_TEXT DEFAULT_COLOR_TEXT ": "     \
                "\x1b[91m" BOLD_TEXT "Assertion `%s` failed." RESET_TEXT               \
                DEFAULT_COLOR_TEXT "\n\n",                                             \
                __FILE__,                                                              \
                __LINE__,                                                              \
                __func__,                                                              \
                #_expr);                                                               \
            exit(1);                                                                   \
        }                                                                              \
    } while(0)
#else
    #define INFO_LOG(_component, _fmt, ...)
    #define WARN_LOG(_component, _fmt, ...)
    #define DEBUG_LOG(_component, _fmt, ...)
    #define ERROR_LOG(_component, _fmt, ...)
    #define FATAL_LOG(_component, _fmt, ...)

    #define ASSERT_FATAL(_component, _expr)
#endif


#endif // DEBUGGING_H


