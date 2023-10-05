#include <iostream>
using namespace std;

/*
Faça um programa que pede valores inteiros de duas listas ao usuário até
que ele digite 0. Em seguida, faça:
a) Uma função para concatenar a segunda lista na primeira. Ex:
lista1 = [0,1,2] e lista2 = [3,4,5], logo lista1 = [0,1,2,3,4,5], em seguida
teste o resultado imprimindo a primeira lista antes e depois da
concatenação.
b) Uma função que retorna o maior número da lista1
c) Uma função que retorna o menor número da lista1
*/
struct nolista{
    int num;
    nolista * prox;
};

void append(nolista* &L, int info){
    if(L==NULL){
        L = new nolista;
        L->num = info;
        L->prox = NULL;
    }else if(L->prox==NULL){
        nolista *p = new nolista;
        p->num = info;
        p->prox = NULL;
        L->prox = p;
    }else{
        nolista *p, *aux = L;
        p = new nolista;
        p->num = info;
        p->prox = NULL;
        while(aux->prox!=NULL){
            aux = aux->prox;
        }
        aux->prox = p;
    }
}

void concatenar(nolista* &L1, nolista* &L2){
    if(L1 == NULL && L2 != NULL){
        L1 = L2;
        L2 = NULL;
    } else if(L1 != NULL && L2 != NULL){
        nolista * p = L1;
        while(p->prox!=NULL){
            p = p->prox;
        }
        p->prox = L2;
        L2 = NULL;
    }
}

/*
void MaiorMenor(nolista *L, int *max, int *min){
    nolista *aux = L;
    *max = aux->num;
    *min = aux->num;
    while(aux!=NULL){
        aux = aux->prox;
        if(aux->num > *max){
            *max = aux->num;
        }
        if(aux->num < *min){
            *min = aux->num;
        }
    }
}
*/

void imprimir(nolista *L){
    nolista *p=L;
    while(p!=NULL){
        cout<< p->num << " ";
        p=p->prox;
    }
}



int main(){

    nolista *L1 = NULL;
    nolista *L2 = NULL;
    int max = 0;
    int min = 0;

    int info;

    cout << "Lista 1"<<endl;
    do{
        cout<<"Digite um valor para adicionar na lista ou 0 para encerrar: ";
        cin >> info;
        if(info!=0){
            append(L1, info);
        }
    }while(info != 0);

    cout << "\nLista 2"<<endl;
    do{
        cout<<"Digite um valor para adicionar na lista ou 0 para encerrar: ";
        cin >> info;
        if(info!=0){
            append(L2, info);
        } 
    }while(info != 0);

    cout << "Lista 1"<<endl;
    imprimir(L1);
    cout << "\nLista 2"<<endl;
    imprimir(L2);

    concatenar(L1, L2);
    cout << "\nListas concatenadas"<<endl;
    imprimir(L1);

    //MaiorMenor(L1, &max, &min);
    //cout<<"O maior número da lista é "<<max<<" e o menor é "<<min;

    return 0;
}