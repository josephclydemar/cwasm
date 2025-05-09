/* nuklear - 1.32.0 - public domain */
/*#include <stdlib.h>*/
#include <stdint.h>
/*#include <stdarg.h>*/
/*#include <math.h>*/
/*#include <math.h>*/
#include <limits.h>
/*#include <time.h>*/

#include "raylib/raylib.h"
#include "window.h"

#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif

//#define NK_INCLUDE_FIXED_TYPES
//#define NK_INCLUDE_STANDARD_IO
#define NK_INCLUDE_STANDARD_VARARGS
//#define NK_INCLUDE_DEFAULT_ALLOCATOR
//#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
//#define NK_INCLUDE_FONT_BAKING
//#define NK_INCLUDE_DEFAULT_FONT
#define RAYLIB_NUKLEAR_IMPLEMENTATION
#define RAYLIB_NUKLEAR_INCLUDE_DEFAULT_FONT
#include "raylib-nuklear.h"

/* ===============================================================
 *
 *                          EXAMPLE
 *
 * ===============================================================*/
/* This are some code examples to provide a small overview of what can be
 * done with this library. To try out an example uncomment the defines */
#define INCLUDE_ALL
/*#define INCLUDE_STYLE */
/*#define INCLUDE_CALCULATOR */
/*#define INCLUDE_CANVAS */
/*#define INCLUDE_OVERVIEW */
/*#define INCLUDE_NODE_EDITOR */

#ifdef INCLUDE_ALL
  //#define INCLUDE_STYLE
  #define INCLUDE_CALCULATOR
  #define INCLUDE_CANVAS
  #define INCLUDE_OVERVIEW
  #define INCLUDE_NODE_EDITOR
#endif

#ifdef INCLUDE_STYLE
  #include "style.c"
#endif
#ifdef INCLUDE_CALCULATOR
  #include "calculator.c"
#endif
#ifdef INCLUDE_CANVAS
  #include "canvas.c"
#endif
#ifdef INCLUDE_OVERVIEW
  #include "overview.c"
#endif
#ifdef INCLUDE_NODE_EDITOR
  #include "node_editor.c"
#endif

struct nk_context *ctx;
struct nk_colorf bg;

void UpdateDrawFrame(void);     // Update and Draw one frame

int main(void) {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "[raylib-nuklear] demo");
    SetTargetFPS(60);

    /* GUI */
    const int fontSize = 13;
    // Font font = LoadFontFromNuklear(fontSize);
    Font font = LoadFontEx("resources/anonymous_pro_bold.ttf", fontSize, NULL, 0);
    ctx = InitNuklearEx(font, fontSize);
    bg.r = 0.10f, bg.g = 0.18f, bg.b = 0.24f, bg.a = 1.0f;

    /* style.c */
    #ifdef INCLUDE_STYLE
    /*set_style(ctx, THEME_WHITE);*/
    /*set_style(ctx, THEME_RED);*/
    /*set_style(ctx, THEME_BLUE);*/
    /*set_style(ctx, THEME_DARK);*/
    #endif

    // Main game loop
#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    while (!WindowShouldClose()) {    // Detect window close button or ESC key
        UpdateDrawFrame();
    }
#endif

    UnloadNuklear(ctx);     // Unload the Nuklear GUI
                            // Upload font
    CloseWindow();
    return 0;
}


void UpdateDrawFrame(void) {
    /* Input */
    UpdateNuklear(ctx);

    /* GUI */
    if (nk_begin(ctx, "Demo", nk_rect(50, 50, 230, 250),
        NK_WINDOW_BORDER|NK_WINDOW_MOVABLE|NK_WINDOW_SCALABLE|
        NK_WINDOW_MINIMIZABLE|NK_WINDOW_TITLE))
    {
        enum {EASY, HARD};
        static int op = EASY;
        static int property = 20;

        nk_layout_row_static(ctx, 30, 80, 1);
        if (nk_button_label(ctx, "button"))
            TraceLog(LOG_INFO, "button pressed!");
        nk_layout_row_dynamic(ctx, 30, 2);
        if (nk_option_label(ctx, "easy", op == EASY)) op = EASY;
        if (nk_option_label(ctx, "hard", op == HARD)) op = HARD;
        nk_layout_row_dynamic(ctx, 22, 1);
        nk_property_int(ctx, "Compression:", 0, &property, 100, 10, 1);

        nk_layout_row_dynamic(ctx, 20, 1);
        nk_label(ctx, "background:", NK_TEXT_LEFT);
        nk_layout_row_dynamic(ctx, 25, 1);
        if (nk_combo_begin_color(ctx, nk_rgb_cf(bg), nk_vec2(nk_widget_width(ctx),400))) {
            nk_layout_row_dynamic(ctx, 120, 1);
            bg = nk_color_picker(ctx, bg, NK_RGBA);
            nk_layout_row_dynamic(ctx, 25, 1);
            bg.r = nk_propertyf(ctx, "#R:", 0, bg.r, 1.0f, 0.01f,0.005f);
            bg.g = nk_propertyf(ctx, "#G:", 0, bg.g, 1.0f, 0.01f,0.005f);
            bg.b = nk_propertyf(ctx, "#B:", 0, bg.b, 1.0f, 0.01f,0.005f);
            bg.a = nk_propertyf(ctx, "#A:", 0, bg.a, 1.0f, 0.01f,0.005f);
            nk_combo_end(ctx);
        }
    }
    nk_end(ctx);

    #ifdef INCLUDE_CALCULATOR
        calculator(ctx);
    #endif
    #ifdef INCLUDE_CANVAS
        canvas(ctx);
    #endif
    #ifdef INCLUDE_OVERVIEW
        overview(ctx);
    #endif
    #ifdef INCLUDE_NODE_EDITOR
        node_editor(ctx);
    #endif

    BeginDrawing();
    {
        ClearBackground(ColorFromNuklearF(bg));
        DrawRectangle(300, 150, 100, 100, RED);
        DrawNuklear(ctx);
    }
    EndDrawing();
}
