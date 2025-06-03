#include "raylib.h"
#include "jogo.h"

int main() {
    // 1. Inicializa a janela
    InitWindow(800, 600, "Meu Jogo");

    // 2. Inicializa o jogo (lógica separada)
    InitGame();

    // 3. Define FPS desejado
    SetTargetFPS(60);

    // 4. Loop principal do jogo
    while (!WindowShouldClose()) {
        UpdateGame();      // lógica de jogo (movimentos, física etc.)
        
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawGame();        // desenha o jogo
        EndDrawing();
    }

    // 5. Finalização
    CloseGame();   // descarrega texturas, sons, etc.
    CloseWindow(); // fecha a janela Raylib

    return 0;
}
