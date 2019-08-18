#pragma once

#define DEFAULT_SIZE 8
#define POSITION_BIT_SIZE 4
#define BOARD_BIT_SIZE POSITION_BIT_SIZE * DEFAULT_SIZE * DEFAULT_SIZE

#define DEFAULT_BOARD "10111100110110101001110111001011" \
                      "11101110111011101110111011101110" \
                      "00000000000000000000000000000000" \
                      "00000000000000000000000000000000" \
                      "00000000000000000000000000000000" \
                      "00000000000000000000000000000000" \
                      "01100110011001100110011001100110" \
                      "00110100010100100001010101000011"

#define EMPTY  0b000
#define KING   0b001
#define QUEEN  0b010
#define ROOK   0b011
#define KNIGHT 0b100
#define BISHOP 0b101
#define PAWN   0b110

#define PIECE_MASK 0b0111
#define WHITE_MASK 0b0000
#define BLACK_MASK 0b1000

#define WHITE true
#define BLACK false

static const uint8_t MASKS[] = {WHITE_MASK, BLACK_MASK};
