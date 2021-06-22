#include <iostream>
 
using namespace std;

// represeta notas

#define _100 0
#define _50 1
#define _20 2
#define _10 3
#define _5 4
#define _2 5

// representa moedas

#define __1 6
#define __50 7
#define __25 8
#define __10 9
#define __05 10
#define __01 11

int main() {
    
    double n;
    cin >> n;
    
    int notas[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int vnotas[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

    int valor = (n * 100);
    int resto = 0;

    int i = 0;
    while( i < 12) {
        notas[i] = (int) valor / vnotas[i];
        resto = valor % vnotas[i];
        valor = resto;
        i++;
    }

    cout << "NOTAS:\n"
        << notas[_100] << " nota(s) de R$ 100.00\n"
        << notas[_50] << " nota(s) de R$ 50.00\n"
        << notas[_20] << " nota(s) de R$ 20.00\n"
        << notas[_10] << " nota(s) de R$ 10.00\n"
        << notas[_5] << " nota(s) de R$ 5.00\n"
        << notas[_2] << " nota(s) de R$ 2.00\n"
        << "MOEDAS:\n"
        << notas[__1] << " moeda(s) de R$ 1.00\n"
        << notas[__50] << " moeda(s) de R$ 0.50\n"
        << notas[__25] << " moeda(s) de R$ 0.25\n"
        << notas[__10] << " moeda(s) de R$ 0.10\n"
        << notas[__05] << " moeda(s) de R$ 0.05\n"
        << notas[__01] << " moeda(s) de R$ 0.01\n";

    return 0;
}