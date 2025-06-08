#include <iostream>
#include <iomanip>
#include "Funcionarios.hpp"

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    Funcionario* vetor[10];
    int quantidade = 0;

    cout << "Quantos funcionários deseja cadastrar? (mínimo 6, máximo 10): ";
    cin >> quantidade;

    while (quantidade < 6 || quantidade > 10) {
        cout << "Número inválido. Digite entre 6 e 10: ";
        cin >> quantidade;
    }

    int i = 0;
    while (i < quantidade) {
        Funcionario* f = criarFuncionario();
        if (f != nullptr) {
            vetor[i] = f;
            ++i;
        }
        else {cout << "Tente novamente.\n";}
    }

    cout << "\n========= LISTA DE FUNCIONÁRIOS =========\n";
    for (int j = 0; j < quantidade; ++j) {
        cout << "\nFuncionário #" << (j + 1) << endl;
        vetor[j]->exibirInformacoes();
    }

    // Liberação de memória
    for (int j = 0; j < quantidade; ++j) {delete vetor[j];}

    return 0;
}
