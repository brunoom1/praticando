#include <iostream>
#include <string>
 
using namespace std;

struct Produto {
    int codigo;
    basic_string<char> especificacao;
    double preco;
};

int _countProdutos = 0;

int criarProduto (Produto *produtos, int codigo, const char *especificacao, double preco) {

    produtos[_countProdutos].codigo = codigo;
    produtos[_countProdutos].especificacao = especificacao;
    produtos[_countProdutos].preco = preco;

    _countProdutos++;

    return 0;   
}

int main() {
 
    struct Produto produtos[5];

    criarProduto(produtos, 1, "Cachorro Quente", 4.00);
    criarProduto(produtos, 2, "X-Salada", 4.50);
    criarProduto(produtos, 3, "X-Bacon", 5.00);
    criarProduto(produtos, 4, "Torrada Simples", 2.00);
    criarProduto(produtos, 5, "Refrigerante", 1.50);

    int codigo, quantidade;

    cin >> codigo >> quantidade;

    struct Produto *searched = NULL;

    int i = 0;
    while (i < 5) {

        if (produtos[i].codigo == codigo) {
            searched = &produtos[i];
        }

        i++;
    }

    printf("Total: R$ %.2f\n", searched->preco * quantidade);    

    return 0;
}