#include <iostream>
using namespace std;

/*
Crie um programa que controla um empilhamento de caixas em um supermercado. 
Cada caixa tem algumas informações importantes: número de série, descrição do produto e fornecedor. 
Defina o número máximo de caixas para o empilhamento.
O programa tem três funções básicas: empilhar, desempilhar e mostrar conteúdo da pilha.
*/

struct nopilha{
    int n_serie;
    string descricao;
    string fornecedor;
    nopilha *prox;
};

nopilha * criar_pilha(){
    return NULL;
}

void empilhar(nopilha *&topo, int codigo, string info, string empresa){
    nopilha * novo = new nopilha;
    novo->n_serie = codigo;
    novo->descricao = info;
    novo->fornecedor = empresa;
    novo->prox = topo;
    topo = novo;
}

nopilha *desempilhar(nopilha *&topo){
    nopilha *p = topo;
    topo = topo->prox;
    p->prox = NULL;
    return p;
}

void mostrar(nopilha *topo){
    nopilha *p = topo;
    cout << "Produtos" << endl;
    while(p != NULL){
        cout<<"Número de série: "<< p->n_serie << endl;
        cout<<"Descrição: "<< p->descricao << endl;
        cout<<"Fornecedor: "<< p->fornecedor << endl;

        p=p->prox;
    }
}


int main(){
    int max = 10;
    nopilha * P = criar_pilha();

    return 0;
}