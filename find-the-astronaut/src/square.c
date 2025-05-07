#include "square.h"
#include "raylib/raylib.h"

square_t* create_square(int32_t x, int32_t y) {
    square_t* new_square = malloc(sizeof(square_t));
    new_square->pos.x = x;
    new_square->pos.y = y;
    new_square->width = SQUARE_SIZE;
    new_square->height = SQUARE_SIZE;
    new_square->state = DEFAULT;
    new_square->color = DARKGREEN;
    return new_square;
}

void draw_square(square_t* const square) {
    switch(square->state) {
        case HOVERED:
            square->color = RED;
            break;
        case CLICKED:
            square->color = YELLOW;
            break;
        default:
            square->color = DARKGREEN;
    }
    DrawRectangle(
            square->pos.x, 
            square->pos.y, 
            square->width, 
            square->height, 
            square->color
            );
}


