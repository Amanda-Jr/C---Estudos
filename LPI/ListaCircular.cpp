//lista encadeada circular
#include <iostream>
using namespace std;

struct nolista{
    string nome;
    nolista *prox;
};

nolista* criar_lista(){
    return NULL;
}

void inserir_inicio(nolista *&l, string nome){
    nolista *novo = new nolista;
    novo -> nome = nome;
    if(l==NULL){
        l = novo;
        l -> prox = l;
    } else if(l->prox == l){
        novo->prox = l;
        l->prox = novo;
        l = novo;
    } else {
        nolista *p = l;
        while(p->prox != l){
            p = p->prox;
        }
        novo ->prox = l;
        p-> prox = novo;
        l = novo;
    }
}

void imprimir_lista(nolista *l){
    nolista *p = l;
    do {
        cout << p -> nome << " ";
        p = p -> prox;
    } while(p != l);
}

string atendimento(nolista *&l){
    nolista *p = l;
    if(l==NULL){
        return NULL;
    } else{
        l = p->prox;
        return p->nome;
    }
}

int main(){

    nolista *lista;
    lista = criar_lista();
    string nome;

    for(int i=0; i<3; i++){
        cout<<"Digite um nome: ";
        cin >> nome;
        inserir_inicio(lista, nome);
    }
    
    imprimir_lista(lista);

    nome = atendimento(lista);
    cout << "\n O último chamado foi "<< nome;

    return 0;
}