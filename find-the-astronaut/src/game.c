#include <time.h>
#include "window.h"
#include "game.h"

game_t* CreateGame(void) {
    Image charcoal_img = LoadImage(CHARCOAL_IMAGE_PNG);
    Image astronaut_img = LoadImage(ASTRONAUT_IMAGE_PNG);
    ImageResize(&charcoal_img, SQUARE_SIZE - 10, SQUARE_SIZE - 10);
    ImageResize(&astronaut_img, SQUARE_SIZE - 10, SQUARE_SIZE - 10);
    Texture2D charcoal_texture = LoadTextureFromImage(charcoal_img);
    Texture2D astronaut_texture = LoadTextureFromImage(astronaut_img);

    game_t* new_game = malloc(sizeof(game_t));

    new_game->reveal_items_button.text = "Reveal";
    new_game->reveal_items_button.pos.x = WINDOW_WIDTH - 160;
    new_game->reveal_items_button.pos.y = 60;
    new_game->reveal_items_button.width = 100;
    new_game->reveal_items_button.height = 30;
    new_game->reveal_items_button.color = ORANGE;

    new_game->is_items_revealed = false;
    new_game->have_not_clicked = true;

    srand(time(NULL));
    uint32_t astronaut_index = rand() % SQUARE_COUNT;
    for(uint32_t i = 0; i < SQUARE_COUNT; ++i) {
        if(i == astronaut_index) {
            new_game->squares_item[i] = astronaut_texture;
            continue;
        }
        new_game->squares_item[i] = charcoal_texture;
    }
    uint32_t index = 0;
    for(uint32_t i = 0; i < 5; ++i) {
        for(uint32_t j = 0; j < 10; ++j) {
            new_game->squares[index] = create_square(
                    60 + j * 100, 
                    50 + i * 100
                    );
            ++index;
        }
    }
    return new_game;
}


void TrackCursor(game_t* const game) {
    int32_t x = GetMouseX();
    int32_t y = GetMouseY();

    if(
        game->is_items_revealed == false &&
        (x > game->reveal_items_button.pos.x && x < game->reveal_items_button.pos.x + game->reveal_items_button.width) &&
        (y > game->reveal_items_button.pos.y && y < game->reveal_items_button.pos.y + game->reveal_items_button.height)
    ) {
        if(game->have_not_clicked == false) {
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) game->is_items_revealed = true;
        } else SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
    }
    
    for(uint32_t i = 0; i < SQUARE_COUNT; ++i) {
        if(
            game->have_not_clicked == true &&
            (x > game->squares[i]->pos.x && x < game->squares[i]->pos.x + game->squares[i]->width) &&
            (y > game->squares[i]->pos.y && y < game->squares[i]->pos.y + game->squares[i]->height)
        ) {
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                game->squares[i]->state = CLICKED;
                game->have_not_clicked = false;
            }
            else if(game->squares[i]->state != HOVERED && game->squares[i]->state != CLICKED) {
                game->squares[i]->state = HOVERED;
                SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
            }

        }
        else if(game->squares[i]->state != DEFAULT && game->squares[i]->state != CLICKED) {
            game->squares[i]->state = DEFAULT;
            SetMouseCursor(MOUSE_CURSOR_DEFAULT);
        }
    }
}

void DrawGame(const game_t* const game) {
    DrawRectangle(
        game->reveal_items_button.pos.x, 
        game->reveal_items_button.pos.y, 
        game->reveal_items_button.width, 
        game->reveal_items_button.height,
        game->reveal_items_button.color
    );
    DrawText(
        game->reveal_items_button.text,
        game->reveal_items_button.pos.x + 12,
        game->reveal_items_button.pos.y + 8,
        FONT_SIZE,
        WHITE
    );
    for(uint32_t i = 0; i < SQUARE_COUNT; ++i) {
        draw_square(game->squares[i]);
    }
    if(game->is_items_revealed == true) {
        for(uint32_t i = 0; i < SQUARE_COUNT; ++i) {
            DrawTexture(
                game->squares_item[i],
                game->squares[i]->pos.x + 5,
                game->squares[i]->pos.y + 5,
                WHITE
            );
        }
    }
}


