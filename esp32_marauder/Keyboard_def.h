#ifndef M5CARDPUTER_KB_KEYS_DEF_H
#define M5CARDPUTER_KB_KEYS_DEF_H

#include "configs.h"

#ifdef MARAUDER_CARDPUTER

#define SHIFT 0x80

#define KEY_LEFT_CTRL 0x80
#define KEY_LEFT_SHIFT 0x81
#define KEY_LEFT_ALT 0x82

#define KEY_FN 0xff
#define KEY_OPT 0x00

#define KEY_BACKSPACE 0x2a
#define KEY_TAB 0x2b
#define KEY_ENTER 0x28

const uint8_t _kb_asciimap[128] = {
    0x00,          // NUL
    0x00,          // SOH
    0x00,          // STX
    0x00,          // ETX
    0x00,          // EOT
    0x00,          // ENQ
    0x00,          // ACK
    0x00,          // BEL
    KEY_BACKSPACE, // BS	Backspace
    KEY_TAB,       // TAB	Tab
    KEY_ENTER,     // LF	Enter
    0x00,          // VT
    0x00,          // FF
    0x00,          // CR
    0x00,          // SO
    0x00,          // SI
    0x00,          // DEL
    0x00,          // DC1
    0x00,          // DC2
    0x00,          // DC3
    0x00,          // DC4
    0x00,          // NAK
    0x00,          // SYN
    0x00,          // ETB
    0x00,          // CAN
    0x00,          // EM
    0x00,          // SUB
    0x00,          // ESC
    0x00,          // FS
    0x00,          // GS
    0x00,          // RS
    0x00,          // US

    0x2c,         //  ' '
    0x1e | SHIFT, // !
    0x34 | SHIFT, // "
    0x20 | SHIFT, // #
    0x21 | SHIFT, // $
    0x22 | SHIFT, // %
    0x24 | SHIFT, // &
    0x34,         // '
    0x26 | SHIFT, // (
    0x27 | SHIFT, // )
    0x25 | SHIFT, // *
    0x2e | SHIFT, // +
    0x36,         // ,
    0x2d,         // -
    0x37,         // .
    0x38,         // /
    0x27,         // 0
    0x1e,         // 1
    0x1f,         // 2
    0x20,         // 3
    0x21,         // 4
    0x22,         // 5
    0x23,         // 6
    0x24,         // 7
    0x25,         // 8
    0x26,         // 9
    0x33 | SHIFT, // :
    0x33,         // ;
    0x36 | SHIFT, // <
    0x2e,         // =
    0x37 | SHIFT, // >
    0x38 | SHIFT, // ?
    0x1f | SHIFT, // @
    0x04 | SHIFT, // A
    0x05 | SHIFT, // B
    0x06 | SHIFT, // C
    0x07 | SHIFT, // D
    0x08 | SHIFT, // E
    0x09 | SHIFT, // F
    0x0a | SHIFT, // G
    0x0b | SHIFT, // H
    0x0c | SHIFT, // I
    0x0d | SHIFT, // J
    0x0e | SHIFT, // K
    0x0f | SHIFT, // L
    0x10 | SHIFT, // M
    0x11 | SHIFT, // N
    0x12 | SHIFT, // O
    0x13 | SHIFT, // P
    0x14 | SHIFT, // Q
    0x15 | SHIFT, // R
    0x16 | SHIFT, // S
    0x17 | SHIFT, // T
    0x18 | SHIFT, // U
    0x19 | SHIFT, // V
    0x1a | SHIFT, // W
    0x1b | SHIFT, // X
    0x1c | SHIFT, // Y
    0x1d | SHIFT, // Z
    0x2f,         // [
    0x31,         // bslash
    0x30,         // ]
    0x23 | SHIFT, // ^
    0x2d | SHIFT, // _
    0x35,         // `
    0x04,         // a
    0x05,         // b
    0x06,         // c
    0x07,         // d
    0x08,         // e
    0x09,         // f
    0x0a,         // g
    0x0b,         // h
    0x0c,         // i
    0x0d,         // j
    0x0e,         // k
    0x0f,         // l
    0x10,         // m
    0x11,         // n
    0x12,         // o
    0x13,         // p
    0x14,         // q
    0x15,         // r
    0x16,         // s
    0x17,         // t
    0x18,         // u
    0x19,         // v
    0x1a,         // w
    0x1b,         // x
    0x1c,         // y
    0x1d,         // z
    0x2f | SHIFT, // {
    0x31 | SHIFT, // |
    0x30 | SHIFT, // }
    0x35 | SHIFT, // ~
    0             // DEL
};

#endif

#endif