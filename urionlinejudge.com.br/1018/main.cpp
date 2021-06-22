#include <iostream>
 
using namespace std;

#define _100 0
#define _50 1
#define _20 2
#define _10 3
#define _5 4
#define _2 5
#define _1 6

int main() {
    
    int n;
    
    cin >> n;
    
    int notas[7] = {0, 0, 0, 0, 0, 0};
    int resto = 0.;
    
    notas[_100] = (int) n / 100;
    resto = n % 100;

    notas[_50] = (int) resto / 50;
    resto = resto % 50;

    notas[_20] = (int) resto / 20;
    resto = resto % 20;

    notas[_10] = (int) resto / 10;
    resto = resto % 10;

    notas[_5] = (int) resto / 5;
    resto = resto % 5;

    notas[_2] = (int) resto / 2;
    resto = resto % 2;

    notas[_1] = resto;

    cout << n << "\n"
        << notas[_100] << " nota(s) de R$ 100,00\n"
        << notas[_50] << " nota(s) de R$ 50,00\n"
        << notas[_20] << " nota(s) de R$ 20,00\n"
        << notas[_10] << " nota(s) de R$ 10,00\n"
        << notas[_5] << " nota(s) de R$ 5,00\n"
        << notas[_2] << " nota(s) de R$ 2,00\n"
        << notas[_1] << " nota(s) de R$ 1,00\n"; 

    return 0;
}