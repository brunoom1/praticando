#include <iostream>
 
using namespace std;
 
int main() {
    
    int total_percorrido;
    double combustivel_gasto;
    
    cin >> total_percorrido >> combustivel_gasto;

    double media = total_percorrido / combustivel_gasto;

    printf("%.3f km/l\n", media);    
 
    return 0;
}