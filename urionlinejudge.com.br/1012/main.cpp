#include <iostream>
#include <cmath>
 
using namespace std;

#define PI 3.14159

int main() {
    
    double A, B, C;
    cin >> A >> B >> C;
    double triangulo = A * C / 2;
    double circulo = pow(C, 2) * PI;
    double trapezio = (A + B) / 2 * C;
    double quadrado = pow(B, 2);
    double retangulo = A * B;

    printf("%f, %f, %f\n\n", A, B, C);

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}