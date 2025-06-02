#include "raylib.h"
#include "jogo.h"

void InitGame() {
    // Aqui você pode carregar modelos, texturas, sons...
}

void UpdateGame() {
    // Atualização da lógica do jogo
}

void DrawGame() {
    BeginMode3D((Camera3D){ 0 });
    DrawGrid(10, 1.0f);
    EndMode3D();
}

void CloseGame() {
    // Unload de recursos
}
