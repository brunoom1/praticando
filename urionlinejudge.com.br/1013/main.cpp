#include <iostream>
#include <cmath>
 
using namespace std;

#define MAIOR_AB(A, B) ( ((A + B) + abs(A - B)) / 2 )
 
int main() {
    
    double a, b, c;
    cin >> a >> b >> c;

    cout << MAIOR_AB(a, MAIOR_AB(b, c)) << " eh o maior\n";

    return 0;
}