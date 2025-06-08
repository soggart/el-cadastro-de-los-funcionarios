#include <iostream>
#include <iomanip>
#include "Funcionarios.hpp"

using namespace std;

Funcionario* criarFuncionario() {
    string nome;
    float salarioBase;
    int id, tipo;

    cout << "\n--- Cadastro de Funcionário ---\n";
    cout << "Nome: ";
    cin.ignore(); // Limpa o buffer
    getline(cin, nome);

    cout << "ID: ";
    cin >> id;

    cout << "Salário base: ";
    cin >> salarioBase;

    cout << "Tipo (1 - Desenvolvedor, 2 - Gerente, 3 - Estagiário): ";
    cin >> tipo;

    switch (tipo) {
        case 1: {
            int projetos;
            cout << "Quantidade de projetos: ";
            cin >> projetos;
            return new Desenvolvedor(nome, salarioBase, id, projetos);
        }
        case 2: {
            float bonus;
            cout << "Bônus mensal: ";
            cin >> bonus;
            return new Gerente(nome, salarioBase, id, bonus);
        }
        case 3: {
            int horas;
            cout << "Horas trabalhadas: ";
            cin >> horas;
            return new Estagiario(nome, salarioBase, id, horas);
        }
        default:
            cout << "Tipo inválido. Funcionário não criado.\n";
            return nullptr;
    }
}

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
        } else {
            cout << "Tente novamente.\n";
        }
    }

    cout << "\n========= LISTA DE FUNCIONÁRIOS =========\n";
    for (int j = 0; j < quantidade; ++j) {
        cout << "\nFuncionário #" << (j + 1) << endl;
        vetor[j]->exibirInformacoes();
    }

    // Liberação de memória
    for (int j = 0; j < quantidade; ++j) {
        delete vetor[j];
    }

    return 0;
}
