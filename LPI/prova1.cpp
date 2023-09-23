
#include <iostream>
using namespace std;

/*
Crie um struct com nome Estudante com os seguintes dados:

Nome (uma string para nome)
Idade (um inteiro para idade)
Nota (um float para nota)

E implemente um programa que:
1 - aloca e preenche um vetor estático de 10 posições com o nome estudantesTotal
2 - verifica a quantidade de alunos aprovados e reprovados utilizando 7 como nota de corte
3 - aloca dinamicamente 2 vetores: estudantesAprovados e estudantesReprovados
4 - percorre o vetor estudantesTotal copiando os dados para os aprovados e reprovados
5 - imprime a relação de aprovados e em seguida, de reprovados
*/

struct Estudante{
    string nome;
    int idade;
    double nota;
};

void preencher(Estudante vet[], int tam){
    cout << "Lista de estudantes"<<endl;
    for(int i=0; i<tam; i++){
        cout << "Nome do "<< i+1<< "° estudante: ";
        cin >> vet[i].nome;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "Nota: ";
        cin >> vet[i].nota;
    }
    cout << endl;
}


void verificar(Estudante total[], int tam, Estudante aprovados[], int *a, Estudante reprovados[], int *r){
    for(int i=0; i<tam; i++){
        if(total[i].nota >= 7){ 
            aprovados[*a-1].nome = total[i].nome;
            aprovados[*a-1].idade = total[i].idade;
            aprovados[*a-1].nota = total[i].nota;
            *a += *a;
        }
        else if(total[i].nota <7){  
            reprovados[*r-1].nome = total[i].nome;
            reprovados[*r-1].nome = total[i].idade;
            reprovados[*r-1].nome = total[i].nota;
            *r += *r;
        }
    }
}


void imprimir(Estudante vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Nome: "<< vet[i].nome << endl;;
        cout << "Idade: "<< vet[i].idade << endl;;
        cout << "Nota: "<< vet[i].nota << endl;;
    }
    cout << endl;
    
}


int main(){
    int tam = 3;
    Estudante *estudantesTotal; 
    estudantesTotal = new Estudante[tam];

    preencher(estudantesTotal, tam);

    int a = 1;
    int r = 1;
    Estudante *estudantesAprovados = new Estudante[a];
    Estudante *estudantesReprovados = new Estudante[r];

    verificar(estudantesTotal, tam, estudantesAprovados, &a, estudantesReprovados, &r);

   
    cout << "Aprovados"<<endl;
    imprimir(estudantesAprovados, a);
    cout << "Reprovados"<<endl;
    imprimir(estudantesReprovados, r);
    cout << "Estudantes"<<endl;
    imprimir(estudantesTotal, tam);


    return 0;
}