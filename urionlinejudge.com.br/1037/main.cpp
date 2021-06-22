#include <iostream>
 
using namespace std;

#define GRUPO 25.0
#define MAX 100
 
int main() {
    
    double n;
    
    cin >> n;
    
    if (n < 0 || n > MAX) {
        cout << "Fora de intervalo\n";
        return 0;
    }
    
    int pos = n / GRUPO;
    double dpos = n / GRUPO;

    int posValue = pos * GRUPO;
    
    if (dpos > pos) {
        cout << "Intervalo (" << posValue << "," << posValue + GRUPO << "]\n";
    } 
    else if (n > GRUPO || n == MAX) {
        cout << "Intervalo (" << posValue - GRUPO << "," << posValue << "]\n";
    }
    else if (n == 0) {
        cout << "Intervalo [" << posValue << "," << posValue + GRUPO << "]\n";
    }
    else {
        cout << "Intervalo [" << posValue - GRUPO << "," << posValue << "]\n";
    }

    return 0;
}