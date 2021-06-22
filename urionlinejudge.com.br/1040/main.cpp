#include <iostream>
#include <stdio.h>

using namespace std;
 
int main() {
 
    float n1, n2, n3, n4;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    float media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
    
    printf("Media: %.1f\n", media);
    
    if (media >= 7) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        
        float nota_exame;
        cin >> nota_exame;
        
        printf("Nota do exame: %.1f\n", nota_exame);        

        float media2 = (nota_exame + media) / 2.;
        
        if (media2 > 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", media2);
    }
 
    return 0;
}