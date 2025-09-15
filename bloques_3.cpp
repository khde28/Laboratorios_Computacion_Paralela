#include <iostream>
#include <cstdlib>
#include <algorithm> 
using namespace std;

void multiplicar_matrices_bloques(int m, int n, int p, int bloque, double A[][1000], double B[][1000], double C[][1000]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i += bloque) {
        for (int j = 0; j < p; j += bloque) {
            for (int k = 0; k < n; k += bloque) {
                for (int i_b = i; i_b < min(i + bloque, m); i_b++) {
                    for (int j_b = j; j_b < min(j + bloque, p); j_b++) {
                        for (int k_b = k; k_b < min(k + bloque, n); k_b++) {
                            C[i_b][j_b] += A[i_b][k_b] * B[k_b][j_b];
                        }
                    }
                }
            }
        }
    }
}

void generar_matriz(int filas, int columnas, double matriz[][1000]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

int main() {
    int tamaño = 1000;
    const int MAX_TAM = 1000;
    const int bloque = 10;

    double A[MAX_TAM][MAX_TAM], B[MAX_TAM][MAX_TAM], C[MAX_TAM][MAX_TAM];

    generar_matriz(tamaño, tamaño, A);
    generar_matriz(tamaño, tamaño, B);
    
    multiplicar_matrices_bloques(tamaño, tamaño, tamaño, bloque, A, B, C);

    return 0;
}
