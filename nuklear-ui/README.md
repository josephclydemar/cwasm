# Nuklear UI
A C + Wasm experiment that uses Nuklear for UI and Raylib for rendering, compiled to run entirely in the browser.

<br>

## System Requirements
> [!NOTE]
> This code has only been tested on Linux.

<br>

- [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html)
- GNU Make
- Python 3

#### Optional (For Development)
If you want linting, code navigation, and auto-completion in your editor, you’ll also need:
- [Bear](https://github.com/rizsotto/Bear) — to generate compilation database (`compile_commands.json`)
- [Clangd](https://clangd.llvm.org/) — for language-aware C/C++ features in your editor

<br>

## Building Instructions
Before building, make sure to activate the Emscripten environment:
```bash
source /path/to/emsdk/emsdk_env.sh
```

#### Development Build
To generate a compilation database for clangd:
```bash
bear -- make
```

#### Quick Start Build
```bash
make
```

<br>

## Running the Project
This run a a local HTTP server from the Build directory:
```
make run
```

<br>

Then open your browser and navigate to:
```
http://localhost:8080/
```
