#include "raylib.h"
#include "jogo.h"

void InitGame() {
    // Inicialize variáveis do jogo aqui (ex: posição do jogador)
}

void UpdateGame() {
    // Lógica do jogo, movimentação, colisões, etc.
}

void DrawGame() {
    // Desenho de elementos 2D
    DrawText("Jogo 2D base!", 10, 10, 20, DARKGRAY);
    DrawRectangle(100, 100, 50, 50, RED); // Exemplo: quadrado vermelho
}

void CloseGame() {
    // Descarregue recursos 
}
