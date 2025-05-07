#ifndef SQUARE_H
#define SQUARE_H

#include "raylib/raylib.h"
#include "types.h"

#define SQUARE_SIZE 80

typedef enum {
    DEFAULT,
    HOVERED,
    CLICKED,
} square_state_e;

typedef struct {
    vec2_t pos;
    int32_t width;
    int32_t height;
    square_state_e state;
    Color color;
} square_t;

square_t* create_square(int32_t x, int32_t y);
void draw_square(square_t* const square);

#endif // SQUARE_H

