#include <iostream>
using namespace std;

/*
Crie um programa que controla uma fila escolar na hora da merenda. 
Para evitar que os alunos se aglomerem, a escola optou em criar um sistema em que os alunos retiram fichas, 
e com base no número da ficha, o aluno é chamado para pegar sua merenda. 
O programa recolhe algumas informações importantes como matrícula, nome e ano escolar da criança. 
Esta escola tem cerca de 100 alunos matriculados, porém a cada dia é feito uma contagem de alunos para que 
as cozinheiras preparem a quantidade de alimentos necessários. 
Então, solicite ao usuário que informe o número máximo de alunos que irão lanchar no dia. 
O programa tem três funções básicas: enfileirar, desenfileirar e mostrar conteúdo da fila.
*/

struct fila{
    nofila * ini;
    nofila * fim;
    int tam;
};

struct nofila{
    int indice;
    string matricula;
    string nome;
    int serie;
    nofila * prox;
};

fila * criar_fila(){
    fila *novo = new fila;
    novo->ini = NULL;
    novo->fim = NULL;
    novo->tam = 0;
    return novo;
}


void enfileirar(fila *F, int ficha, string matric, string fulano, int ano, int max){
    if(F->tam < max){
        nofila * novo = new nofila;
        novo->indice = ficha;
        novo->nome = fulano;
        novo->matricula = matric;
        novo->serie = ano;
        novo->prox = NULL;

        if(F->ini == NULL){
            F->ini = novo;
            F->fim = novo;

        } else{
            F->fim->prox = novo;
            F->fim = novo;
        }
    }
    F->tam++;
}

nofila * desenfileirar(fila *F, int ficha){
    if(F->ini == NULL){
        return NULL;
    } else{
        if(F->ini->indice == ficha){
            nofila *p = F->ini;
            F->ini = p->prox;
            F->tam--;
            return p;
        }
    }
    
}

void mostrar(fila *F){
    cout << "Fila" << endl;
    nofila *p = F->ini;
    for(int i=0; i < F->tam; i++){
        cout<<"Ficha: "<< p->indice << endl;
        cout<<"Nome: "<< p->nome << endl;
        cout<<"Matrícula: "<< p->matricula << endl;
        cout<<"Série: "<< p->serie << endl;

        p = p->prox;
    }
}




int main(){
    int max;
    fila * F;

    cout<<"Quantos alunos estão presentes hoje? ";
    cin >> max;

    F = criar_fila();

    return 0;
}