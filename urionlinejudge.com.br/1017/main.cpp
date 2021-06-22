#include <iostream>
 
using namespace std;
 
int main() {
 
    int tempo_gasto, velocidade_media;
    cin >> tempo_gasto >> velocidade_media;
    
    int distancia = velocidade_media * tempo_gasto;

    double litros_gastos = distancia / 12.;
    
    printf("%.3f\n", litros_gastos);
    
    
    return 0;
}