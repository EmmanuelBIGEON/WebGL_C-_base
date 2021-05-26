#include "func.h"
#include <emscripten/html5.h>
#include <GLES2/gl2.h>
#include <emscripten.h>

int main(int argc, char**argv)
{
    printjs("Creation du context webgl");
    EMSCRIPTEN_WEBGL_CONTEXT_HANDLE emctx = emscripten_webgl_get_current_context();
    EmscriptenWebGLContextAttributes attr;
    emscripten_webgl_init_context_attributes(&attr);
    EMSCRIPTEN_WEBGL_CONTEXT_HANDLE ctx = emscripten_webgl_create_context("#canvas", &attr);
    emscripten_webgl_make_context_current(ctx);

    printjs("Recouvrement de la zone de dessin en jaune");
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    return 1;
}