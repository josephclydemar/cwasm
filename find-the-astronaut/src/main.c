#include "raylib/raylib.h"
#include "window.h"
#include "game.h"

#define FPS 60

#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif


// Game State
static bool is_game_state_set = false;
static game_t* game;

// Update and Draw one frame
void UpdateDrawFrame(void);

int main(void) {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Lesson01 | Raylib + WASM");

    #if defined(PLATFORM_WEB)
        emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
    #else
        SetTargetFPS(FPS);
        while (!WindowShouldClose()) {
            UpdateDrawFrame();
        }
    #endif

    CloseWindow();
    return 0;
}

void UpdateDrawFrame(void) {
    if(!is_game_state_set) {
        game =  CreateGame();
        is_game_state_set = true;
    }
    
    DrawText("Find the Astronaut!!", 280, 10, 35, BEIGE);

    // Draw
    BeginDrawing();
    ClearBackground(DARKPURPLE);

    TrackCursor(game);
    DrawGame(game);

    EndDrawing();
}

