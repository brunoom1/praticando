#include <iostream>
 
using namespace std;

#define SEGUNDO 1
#define MINUTO (SEGUNDO * 60)
#define HORA (MINUTO * 60)

int main() {
    
    int seg;
    
    cin >> seg;
    
    int horas = seg / HORA;
    int rest = seg % HORA;

    int minutos = rest / MINUTO;
    rest = rest % MINUTO;
    
    int segundos = rest;
    
    cout << horas << ":"
        << minutos << ":"
        << segundos << "\n";
    
    return 0;
}