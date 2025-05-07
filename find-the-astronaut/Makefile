# emcc -o build/game.html src/main.c -Os -Wall -I include/raylib/. -L raylib/src/. raylib/src/libraylib.web.a -s USE_GLFW=3 --shell-file src/shell.html -DPLATFORM_WEB
CC = emcc
CFLAGS = -std=c99 -Wall -Werror -Os -DPLATFORM_WEB
INCLUDE = -I include/.
LFLAGS = -L lib/raylib/. lib/raylib/libraylib.web.a -s USE_GLFW=3 --shell-file template/gpt.html

BUILD_MODE = debug

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -DDEBUG
endif

INC_COMMON = include/types.h include/debugging.h include/window.h
SRC_MAIN = src/main.c
OBJ_MAIN = lib/main.o

INC_SQUARE = include/square.h
SRC_SQUARE = src/square.c
OBJ_SQUARE = lib/square.o

INC_GAME = include/game.h
SRC_GAME = src/game.c
OBJ_GAME = lib/game.o

TARGET_MAIN = build/index.html


.PHONY: all run clean

all: $(TARGET_MAIN)

run:
	python3 -m http.server 8080 -d build

clean:
	$(RM) $(wildcard build/*)
	$(RM) $(wildcard lib/**.o)


$(TARGET_MAIN): $(OBJ_MAIN) $(OBJ_SQUARE) $(OBJ_GAME)
	$(CC) $(CFLAGS) $^ -o $@ $(LFLAGS) --preload-file assets

$(OBJ_MAIN): $(SRC_MAIN) $(INC_COMMON)
	$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $@

$(OBJ_SQUARE): $(SRC_SQUARE) $(INC_SQUARE) $(INC_COMMON)
	$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $@

$(OBJ_GAME): $(SRC_GAME) $(INC_GAME) $(INC_COMMON)
	$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $@


