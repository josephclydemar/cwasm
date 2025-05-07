# emcc -o build/game.html src/main.c -Os -Wall -I include/raylib/. -L raylib/src/. raylib/src/libraylib.web.a -s USE_GLFW=3 --shell-file src/shell.html -DPLATFORM_WEB
CC = emcc
CFLAGS = -std=c99 -Wall -Werror -Os -DPLATFORM_WEB
INCLUDE = -I include/.
LFLAGS = -L lib/raylib/. lib/raylib/libraylib.web.a -s USE_GLFW=3 --shell-file templates/gpt.html

BUILD_MODE = debug

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -DDEBUG
endif

SRC_MAIN = src/main.c
OBJ_MAIN = lib/main.o
TARGET_MAIN = build/index.html


.PHONY: all run clean

all: $(TARGET_MAIN)

run:
	python3 -m http.server 8080 -d build

clean:
	$(RM) $(wildcard build/*)
	$(RM) $(wildcard lib/**.o)


$(TARGET_MAIN): $(OBJ_MAIN)
	$(CC) $(CFLAGS) $^ -o $@ $(LFLAGS) --preload-file resources

$(OBJ_MAIN): $(SRC_MAIN)
	$(CC) $(CFLAGS) -c $(INCLUDE) $< -o $@

