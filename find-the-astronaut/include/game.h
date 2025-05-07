#ifndef GAME_H
#define GAME_H

#include "square.h"

#define SQUARE_COUNT 50
#define FONT_SIZE    20
#define CHARCOAL_IMAGE_PNG  "../assets/charcoal.png"
#define ASTRONAUT_IMAGE_PNG "../assets/rocketman.png"

typedef struct {
    square_t* squares[SQUARE_COUNT];
    Texture2D squares_item[SQUARE_COUNT];
    struct {
        char* text;
        vec2_t pos;
        int32_t width;
        int32_t height;
        Color color;
    } reveal_items_button;
    bool is_items_revealed;
    bool have_not_clicked;
} game_t;

game_t* CreateGame(void);
void TrackCursor(game_t* const game);
void DrawGame(const game_t* const game);

#endif // GAME_H

