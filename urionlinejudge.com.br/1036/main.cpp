#include <iostream>
#include <cmath>
 
using namespace std;

int falha () {
    printf("Impossível calcular\n");
    return 0;
}
 
int main() {
    
    /**
     * Fórmula
     * 
     * 
     * x = (-b +- raiz(delta)) / 2.a
     * delta = b² * 4 * a * c
     */

    double a, b, c;
    cin >> a >> b >> c;
    
    if (a == 0 || b == 0 || c == 0) {
        return falha();
    }
    
    double delta = pow(b, 2) - 4 * a * c;
    
    if (delta < 0) {
        return falha();   
    }
    
    double raiz_delta = sqrt(delta);

    double x1 = (b * -1. + raiz_delta) / (2 * a);
    double x2 = (b * -1. - raiz_delta) / (2 * a);
    
    printf("R1 = %.5f\n", x1);
    printf("R2 = %.5f\n", x2);
    
    

    return 0;
}