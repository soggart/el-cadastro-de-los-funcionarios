#include <iostream>
#include <iomanip>
#include "Funcionarios.hpp"

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    Funcionario* vetor[10];

    vetor[0] = new Desenvolvedor("Joana", 3000.00, 101, 3);
    /* Saída esperada:
ID: 101 
Nome: Joana 
Tipo: Desenvolvedor 
Projetos: 3 
Salário base: 3000.00 
Salário final: 4500.00 
    */
    vetor[1] = new Estagiario("Carlos", 1200.00, 102, 80);
    /* Saída esperada:
ID: 102 
Nome: Carlos 
Tipo: Estagiário 
Horas trabalhadas: 80 
Salário base: 1200.00    
Salário final: 600.00 
    */
    vetor[2] = new Gerente("Marina", 5000.00, 103, 2000.00);
    /* Saída esperada:
ID: 103 
Nome: Marina 
Tipo: Gerente 
Bônus: 2000.00 
Salário base: 5000.00  
Salário final: 7000.00 
    */
    int n = 3; // Quantidade de funcionários, altere quando adicionar mais
    for (int i = 0; i < n; ++i) {vetor[i]->exibirInformacoes();}

    // Liberando memória
    for (int i = 0; i < n; ++i) {delete vetor[i];}
    return 0;
}