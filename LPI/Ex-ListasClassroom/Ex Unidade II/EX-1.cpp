#include <iostream>
using namespace std;

/*
1) Considere uma fila de clientes em um banco. Ao retirar uma ficha para a fila, os clientes são identificados em 
prioritários ou não prioritátios. Desenvolva um tipo de dados para coordenar essa fila, incluindo as funções:
    Criar fila;
    Enfileirar;
    Atender.
Considere que os clientes prioritários sempre serão atendidos antes dos clientes não prioritários. 
Dessa forma, ao inserir um cliente na fila:
    Um cliente não prioritário sempre será inserido no fim da fila;
    Um cliente prioritário deve ser inserido antes do primeiro cliente não prioritário, 
    mas após os demais clientes prioritários;
    Considere todas as configurações da fila, em relação à presença ou não de clientes prioritários e não prioritários;
    Atendimentos sempre acontecem na primeira posição da fila.
*/
struct nofila{
    string nome;
    bool priori;
    nofila *ant;
    nofila *prox;
};

struct fila{
    nofila *ini;
    nofila *fim;
};


fila *criar_fila(){
    fila *F = new fila;
    F->ini = NULL;
    F->fim = NULL;
    return F;
}

void enfileirar(fila *F, bool p, string n){
    nofila *novo = new nofila;
    novo->nome = n;
    novo->priori = p;
    novo->ant = NULL;
    novo->prox = NULL;

    if(F->ini == NULL){
        F->ini = novo;
        F->fim = novo;
    } else{
        if(novo->priori == false){
            novo->ant = F->fim;
            F->fim->prox = novo;
            F->fim = novo;

        } else{
            if(F->ini->priori == false){
                novo->prox = F->ini;
                F->ini->ant = novo;
                F->ini = novo;
            } else{
                nofila *p = F->ini;
                while(p->prox->priori == true){
                    p = p->prox;
                }
                novo->ant = p;
                novo->prox = p->prox;
                p->prox->ant = novo;
                p->prox = novo;
            }
            
        }
    }
}

nofila *atender(fila *F){
    if(F->ini == NULL){
        return NULL;

    }else if(F->ini == F->fim){
        nofila *p = F->ini;
        F->ini = NULL;
        F->fim = NULL;
        return p;

    } else{
        nofila *p = F->ini;
        F->ini = p->prox;
        F->ini->ant = NULL;
        p->prox = NULL;
        return p;

    }
}


int main(){
    fila * F = criar_fila();

    int clientes;
    cout<<"Quantos são os clientes na fila? ";
    cin >> clientes;
    for(int i=0; i<clientes; i++){
        bool p;
        string nome;
        cout << "Nome: ";
        cin >> nome;
        cout<<"O cliente é prioritário?(1 para sim, 0 para não) ";
        cin >> p;
        enfileirar(F, p, nome);
    }
    cout<<"\nA fila de atendimento está em funcionamento, aguarde sua chamada"<<endl;
    cout<<"Clientes chamados"<<endl;
    for(int i=0; i<clientes; i++){
        nofila *p = atender(F);
        if(p->priori){
            cout<<p->nome<<" - prioridade"<<endl;
        } else{
            cout<<p->nome<<endl;
        }
    }
    

    return 0;
}