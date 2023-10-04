#include <iostream>
using namespace std;

/*
append
print
len
*/

struct nolista{
    string dado;
    nolista * prox;
};

void append(nolista* &L, string info){
    if(L==NULL){
        L = new nolista;
        L -> dado = info;
        L -> prox = NULL;
    }
    else if(L->prox == NULL){
        nolista *aux = new nolista;
        aux -> dado = info;
        aux -> prox = NULL;
        L -> prox = aux;
    } 
    else {
        nolista * aux;
        aux = L;
        while (aux->prox != NULL){
            aux = aux -> prox;
        }
        nolista *p = new nolista;
        p -> dado = info;
        p -> prox = NULL;
        aux -> prox = p;
    }
}

int len(nolista *L){
    int tam = 0;
    nolista *aux = L;
    while (aux != NULL){
        aux = aux->prox;
        tam++;
    }
    return tam;
}

void print(nolista *L){
    nolista *p = L;
    while(p != NULL){
        cout << p-> dado << " ";
        p = p->prox;
    }
}


int main(){
    nolista *L = NULL;
    string info;

    cout << "Tamanho: " << len(L) << endl;

    for(int i=0; i<5; i++){
        cout << "Nome: ";
        cin >> info;
        append(L, info);
    }

    print(L);
    cout << "Tamanho: " << len(L) << endl;



    return 0;
}