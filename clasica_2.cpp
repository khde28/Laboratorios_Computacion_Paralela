#include <iostream>
#include <cstdlib>
using namespace std;

void multiplicar_matrices_clasica(int m, int n, int p, double A[][1000], double B[][1000], double C[][1000]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimir_matriz(int m, int n, double matriz[][1000]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
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

    double A[MAX_TAM][MAX_TAM], B[MAX_TAM][MAX_TAM], C[MAX_TAM][MAX_TAM];

    generar_matriz(tamaño, tamaño, A);
    generar_matriz(tamaño, tamaño, B);
    
    multiplicar_matrices_clasica(tamaño, tamaño, tamaño, A, B, C);

    return 0;
}

