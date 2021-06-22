#include <iostream>
 
using namespace std;

#define MES 30
#define ANO 365
 
int main() {
 
    int dias;
    cin >> dias;
    
    int anos = dias / ANO;
    int resto = dias % ANO;
    
    int meses = resto / MES;
    resto = resto % MES;
    
    cout << anos << " ano(s)\n"
        << meses << " mes(es)\n"
        << resto << " dia(s)\n";
 
    return 0;
}