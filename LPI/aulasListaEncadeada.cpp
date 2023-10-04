#include <iostream>
using namespace std;
// Aulas dos dias 21/09, 27/09 e 28/09
/*
append
imprimir
len
insert
pop
pop_posicao
imprimir inverso
concatenar
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
/* -- minha resolução
bool insert(nolista* &L, string info, int pos){
    if(pos<0 || pos>len(L)){
        return false;
    } else{
        if(pos==0){
            nolista *aux;
            aux = new nolista;
            aux -> dado = info;
            aux -> prox = L;
            L = aux;
        } else {
            nolista * aux, *p = L;
            aux = new nolista;
            aux -> dado = info;
            for(int i=0; i<pos-1; i++){
                p = p->prox;
            }
            aux->prox = p->prox;
            p->prox = aux;
        }
        return true;
    }
}
*/

bool insert(nolista* &L, string info, int pos){
    if(pos<0 || pos>len(L)){
        return false;
    } else{
        nolista *aux;
        aux = new nolista;
        aux -> dado = info;
        aux -> prox = NULL;
        if(pos==0){
            aux -> prox = L;
            L = aux;
        } else {
            nolista *p = L;
            for(int i=0; i<pos-1; i++){
                p = p->prox;
            }
            aux->prox = p->prox;
            p->prox = aux;
        }
        return true;
    }
}

nolista * pop(nolista *L){
    if(L==NULL){
        return NULL;
    } else if(L->prox==NULL){
        nolista *p = L;
        L = NULL;
        return p;
    } else{
        nolista *p=L, *aux;
        while(p->prox != NULL){
            aux = p;
            p=p->prox;
        }
        aux->prox = NULL;
        return p;
    }
}

nolista *pop_posicao(nolista * &L, int pos){
    if(pos<0 || pos>=len(L)){
        return NULL;
    } else if(pos==0){
        nolista * aux = L;
        L = L->prox; // NULL
        return aux;
    }else {
        nolista *p = L, *aux;
        int cont = 0;
        while(cont<pos){
            aux = p;
            p = p->prox;
            cont++;
        }
        aux->prox = p->prox;
        return p;
    }
}

void concatenar(nolista * &L1, nolista * &L2){
    if(L1 == NULL && L2 != NULL){
        L1 = L2;
        L2 = NULL;
    } else if (L1 != NULL && L2 != NULL){
        nolista *p = L1;
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = L2;
        L2 = NULL;
    }
}

void imprimir(nolista *L){
    nolista *p = L;
    while(p != NULL){
        cout << p-> dado << " ";
        p = p->prox;
    }
}

void imprimir_inverso(nolista *L){
    if (L!=NULL){
        nolista *aux, *p=L;
        while(p->prox != NULL){
            p = p->prox;
        }
        while(p!=L){
            cout << p->dado << " ";
            aux = L;
            while(aux->prox != p){
                aux = aux->prox;
            }
            p=aux;
        }
        cout << L->dado;
    }
}


int main(){
    nolista *L1 = NULL;
    nolista *L2 = NULL;
    string info1;
    string info2;
    int pos;
    nolista * Npop;

    //cout << "Tamanho: " << len(L) << endl;

    for(int i=0; i<5; i++){
        cout << "Lista 1: "<<endl;
        cout << "Nome: ";
        cin >> info1;
        append(L1, info1);
    }

    for(int i=0; i<3; i++){
        cout << "Lista 2: "<<endl;
        cout << "Nome: ";
        cin >> info2;
        append(L2, info2);
    }

    cout << "Tamanho lista 1: " << len(L1) << endl;
    imprimir(L1);
    cout << "Tamanho lista 2: " << len(L2) << endl;
    imprimir(L2);


    cout << "\n Selecione uma posição para adicionar um item na lista 1: ";
    cin >> pos; 
    cout << "Insira a nova informação: ";
    cin >> info1;


    if(insert(L1, info1, pos)){
        cout<<"Elemento adicionado na lista 1, sua lista agora contém "<<len(L1)<<" elementos."<<endl;
    } else{
        cout << "Posição inválida! Elemento não adicionado";
    }

    imprimir(L1);

    
    Npop = pop(L1);
    delete Npop;
    cout<<"\n Último elemento removido, sua lista 1 agora contém "<<len(L1)<<" elementos."<<endl;
    imprimir(L1);

    cout << "\n Lista 2 inversa: " <<endl;
    imprimir_inverso(L2);

    cout <<"\n Listas concatenadas "<<endl;
    concatenar(L1, L2);
    imprimir(L1);

    return 0;
}