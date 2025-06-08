#ifndef FUNCIONARIOS_HPP
#define FUNCIONARIOS_HPP

#include <string>

using namespace std;

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Funcionário>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Funcionario{
protected:
    string nome;
    float salarioBase;
private:
    int id;
public:
    virtual ~Funcionario();
    void setNome(string nome);
    void setSalarioBase(float salarioBase);
    void setId(int id);
    string getNome();
    float getSalarioBase(); 
    int getId();
    virtual void exibirInformacoes();
    virtual float calcularSalarioFinal() = 0;
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<Desenvolvedor>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Desenvolvedor : public Funcionario{
private:
    int quantidadeDeProjetos;
public:
    Desenvolvedor();
    Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos);
    void setQntDeProjetos(int quantidadeDeProjetos);
    int getQntDeProjetos();
    void exibirInformacoes();
    float calcularSalarioFinal();
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Gerente>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Gerente : public Funcionario{
private:
    float bonusMensal;
public:
    Gerente();
    Gerente(string nome, float salarioBase, int id, float bonusMensal);
    void setBonusMensal(float bonusMensal);
    float getBonusMensal();
    void exibirInformacoes();
    float calcularSalarioFinal();
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Estagiário>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Estagiario : public Funcionario{
private:
    int horasTrabalhadas;
public:
    Estagiario();
    Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas);
    void setHrsTrabalhadas(int horasTrabalhadas);
    int getHrsTrabalhadas();
    void exibirInformacoes();
    float calcularSalarioFinal();
};

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<Funções>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
Funcionario* criarFuncionario();

#endif
