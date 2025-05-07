# Find the Astronaut
A simple browser-based game written in C and compiled to WebAssembly (Wasm). The objective is to guess which square the astronaut is hiding in.

<br>

> [!NOTE]
> This code has only been tested on Linux.

<br>
<br>

## System Requirements
- [Emscripten SDK](https://emscripten.org/docs/getting_started/downloads.html)
- GNU Make
- Python 3

<br>

#### Optional (For Development)
If you want linting, code navigation, and auto-completion in your editor, you’ll also need:
- [Bear](https://github.com/rizsotto/Bear) — to generate compilation database (`compile_commands.json`)
- [Clangd](https://clangd.llvm.org/) — for language-aware C/C++ features in your editor

<br>
<br>

## Building Instructions
Before building, make sure to activate the Emscripten environment:
```bash
source /path/to/emsdk/emsdk_env.sh
```

<br>

#### Development Build
To generate a compilation database for clangd:
```bash
bear -- make
```

<br>

#### Quick Start Build
```bash
make
```

<br>
<br>

## Running the Project
This runa a local HTTP server from the Build directory:
```
make run
```

<br>

Then open your browser and navigate to:
```
http://localhost:8080/
```
