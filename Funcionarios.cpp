#include <iostream>
#include "Funcionarios.hpp"

using namespace std;

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Funcionário>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Funcionario::~Funcionario(){}
void Funcionario::setNome(string nome){this->nome = nome;}
void Funcionario::setSalarioBase(float salarioBase){this->salarioBase = salarioBase;}
void Funcionario::setId(int id){this->id = id;}
string Funcionario::getNome(){return this->nome;}
float Funcionario::getSalarioBase(){return this->salarioBase;}
int Funcionario::getId(){return this->id;}
void Funcionario::exibirInformacoes(){return;}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<Desenvolvedor>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Desenvolvedor::Desenvolvedor(){}
Desenvolvedor::Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos){
    setNome(nome);
    setSalarioBase(salarioBase);
    setId(id);
    setQntDeProjetos(quantidadeDeProjetos);
}
void Desenvolvedor::setQntDeProjetos(int quantidadeDeProjetos){this->quantidadeDeProjetos = quantidadeDeProjetos;}
int Desenvolvedor::getQntDeProjetos(){return this->quantidadeDeProjetos;}
void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << "\nNome: " << this-> nome << "\nTipo: Desenvolvedor" << endl;
    cout << "Projetos: " << this->quantidadeDeProjetos << endl;
    cout << "Salário base: " << this->salarioBase << "\nSalário final: " << calcularSalarioFinal() << endl;
}
float Desenvolvedor::calcularSalarioFinal(){return this->salarioBase + (500 * this->quantidadeDeProjetos);}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Gerente>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Gerente::Gerente(){}
Gerente::Gerente(string nome, float salarioBase, int id, float bonusMensal){
    setNome(nome);
    setSalarioBase(salarioBase);
    setId(id);
    setBonusMensal(bonusMensal);
}
void Gerente::setBonusMensal(float bonusMensal){this->bonusMensal = bonusMensal;}
float Gerente::getBonusMensal(){return this->bonusMensal;}
void Gerente::exibirInformacoes(){
    cout << "ID: " << getId() << "\nNome: " << this-> nome << "\nTipo: Gerente" << endl;
    cout << "Bônus: " << this->bonusMensal << endl;
    cout << "Salário base: " << this->salarioBase << "\nSalário final: " << calcularSalarioFinal() << endl;
}
float Gerente::calcularSalarioFinal(){return this->salarioBase + this->bonusMensal;}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Estagiário>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Estagiario::Estagiario(){}
Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas){
    setNome(nome);
    setSalarioBase(salarioBase);
    setId(id);
    setHrsTrabalhadas(horasTrabalhadas);
}
void Estagiario::setHrsTrabalhadas(int horasTrabalhadas){this->horasTrabalhadas = horasTrabalhadas;}
int Estagiario::getHrsTrabalhadas(){return this->horasTrabalhadas;}
void Estagiario::exibirInformacoes(){
    cout << "ID: " << getId() << "\nNome: " << this-> nome << "\nTipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << this->horasTrabalhadas << endl;
    cout << "Salário base: " << this->salarioBase << "\nSalário final: " << calcularSalarioFinal() << endl;
}
float Estagiario::calcularSalarioFinal(){return this->salarioBase * (this->horasTrabalhadas / 160.0);}
