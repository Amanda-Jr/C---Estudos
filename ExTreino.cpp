#include <iostream>
using namespace std;

/*
Faça um array dinâmico de um struct de funcionários, onde cada funcionário tem nome, telefone, cpf e salário
*/

struct funcionario{
    string nome;
    string tel;
    string cpf;
    double salario;
};

void cadastrar_funcionario(int quant, funcionario vet[]){
    cout << "-----------Cadastro de funcionários-----------" << endl;
    for(int i=0; i<quant; i++){
        cout << i+1 <<"°" <<" funcionário" << endl;
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Telefone: ";
        cin >> vet[i].tel;
        cout << "CPF: ";
        cin >> vet[i].cpf;
        cout << "Salário: ";
        cin >> vet[i].salario;
        cout<< endl;
    }
}

void imprimir_funcionarios(int quant, funcionario vet[]){
    int indice;
    char resp;
    do{
        cout << "De qual funcionário deseja ver as informações? (1, 2, 3...): ";
        cin >> indice;

        if (indice <= quant ){
            cout << "Nome: " << vet[indice-1].nome << endl;
            cout << "Telefone: " << vet[indice-1].tel << endl;
            cout << "CPF: " << vet[indice-1].cpf << endl;
            cout << "Salário: " << " R$" << vet[indice-1].salario << endl;
        } else{
            cout << "Não há informações disponíveis sobre esse funcionário" << endl;
        }
        

        cout << "Deseja ver informações de outro funcionário? (s/n)";
        cin >> resp;

    } while(resp == 's');
}

int main(){
    int func;
    cout << "Quantos funcionários tem a empresa? ";
    cin >> func;
    funcionario *vet = new funcionario[func];

    cadastrar_funcionario(func, vet);
    imprimir_funcionarios(func, vet);

    return 0;
}