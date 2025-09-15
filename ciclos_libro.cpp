#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;  
double A[MAX][MAX] = {{0}};  
double x[MAX] = {0};        
double y[MAX] = {0};         

int main() {
    int i, j;  
/*
    // Primer ciclo
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            y[i] += A[i][j] * x[j];  
        }
    }
*/

    // Segundo ciclo
    for (j = 0; j < MAX; j++) {
        for (i = 0; i < MAX; i++) {
            y[i] += A[i][j] * x[j];  
        }
    }

    return 0;
}
