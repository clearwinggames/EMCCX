# EMCCX
Emscripten: C to WASM (? and more ?)


Build cmd:
```
"emcc one.c -s ERROR_ON_UNDEFINED_SYMBOLS=0 -o one.html"
```

To call "main" directly from javascript compile with
```
"emcc one.c -s EXPORTED_RUNTIME_METHODS=ccall -s EXPORTED_FUNCTIONS=
_main -s ERROR_ON_UNDEFINED_SYMBOLS=0 -o one.html"
```

Then in the developer console use
```
Module.ccall('main', 'number');
```
