#include <iostream>
using namespace std;

/*
Com relação à listas duplamente encadeadas implemente:
(a) Uma função para concatenar duas listas.
(b) uma função para pesquisar elementos na lista.
(c) Uma função que separa uma lista em duas novas listas.
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


void concat(descritor *d1, descritor *d2){
    //colocar a segunda dentro da primeira
    if(d1->ini != NULL && d2->ini != NULL){
        d1->fim->prox = d2->ini;
        d2->ini->ant = d1->fim;
        d2->ini = NULL;
        d2->fim = NULL;
    }
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


descritor *separar(descritor *D){
    descritor *S = criar_lista();
    if(D != NULL && D->tamanho > 1){
        nolista *p = D->ini;

        if((D->tamanho)%2 == 0){
            int meio = (D->tamanho)/2;
            for(int i=0; i<meio; i++){
                p = p->prox;
            }
            S->tamanho = meio;
            D->tamanho = meio;
            S->ini = p->prox;
            S->fim = D->fim;
            D->fim = p;
            S->ini->ant = NULL;
            D->fim->prox = NULL;
            
        } else {
            int meio = (D->tamanho)/2;
            for(int i=0; i<meio; i++){
                p = p->prox;
            }
            S->tamanho = meio;
            D->tamanho = (D->tamanho)-meio;
            S->ini = D->ini;
            S->fim = p;
            D->ini->ant = NULL;
            S->fim->prox = NULL;

        }
        return S;
    }
}



int main(){
    descritor * D = criar_lista();


    return 0;
}