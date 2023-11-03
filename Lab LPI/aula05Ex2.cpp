#include <iostream>
using namespace std;

/*
Uma lista duplamente encadeada possui registros que tem ligações com o sucessor e o predecessor na lista. 
Ainda, existe um tipo que possui um “nó cabeça”, que é um registro auxiliar que aponta para
o “primeiro” e o “último” registro da lista e é apontado por eles. 
Implemente métodos para busca, inserção e eliminação de elementos para este tipo de lista dupla.
*/

struct nolista{
    int dado;
    nolista *prox;
    nolista *ant;
};

struct descritor{ //metadados
    int tamanho;
    nolista *ini;
    nolista *fim;
};

descritor *criar_lista(){
    descritor *D = new descritor;
    D->tamanho = 0;
    D->ini = NULL;
    D->fim = NULL;

    return D;
}

bool pesquisar(descritor *D, int info){
    nolista * p = D->ini;
    while(p!=NULL){
        if(p->dado==info){
            return true;
        } 
        p = p->prox;
    }
    return false;
}

void append(descritor *D, int info){
    nolista * novo = new nolista;
    novo->dado = info;
    novo->ant = NULL;
    novo->prox = NULL;
    novo->ant = D->fim;
    D->ini->ant = novo;
    D->fim->prox = novo;
}

bool insert(descritor *D, int info, int pos){
    if(pos<0 || pos>(D->tamanho-1)){
        return false;
    } 
    else {
        nolista * novo = new nolista;
        novo->dado = info;
        novo->ant = NULL;
        novo->prox = NULL;

        if(pos == 0){
            novo->prox = D->ini;
            D->ini->ant = novo;

        } else if(pos == (D->tamanho-1)){
            novo->ant = D->fim;
            D->ini->ant = novo;
            D->fim->prox = novo;

        } else {
            nolista *p = D->ini;
            for(int i=0; i<pos; i++){
                p = p->prox;
            }
            novo->ant = p->ant;
            novo->prox = p;
            p->ant->prox = novo;
            p->ant = novo;

        }
        D->tamanho++;

        return true;
    }
    
}

nolista * pop(descritor *D){
    nolista *p = D->fim;
    D->fim->ant->prox = NULL;
    return p;
}


int main(){


    return 0;
}