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

struct Estudante {
    string nome;
    int idade;
    double nota;
};

void preencher(Estudante vet[], int tam, int &a, int &r){
    for(int i=0; i<tam; i++){
        cout << "Nome: ";
        cin >> vet[i].nome ;

        cout << "Idade: ";
        cin >> vet[i].idade;

        cout<<"Nota: ";
        cin >> vet[i].nota;
        if(vet[i].nota >= 7){
            a++;
        }else{
            r++;
        }

    }
}

void imprimir(Estudante vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Nome: " << vet[i].nome << endl;
        cout << "Idade: " << vet[i].idade << endl;
        cout<<"Nota: " << vet[i].nota << endl;
    }
}

void classificar(Estudante vet[], Estudante estudantesAprovados[], Estudante estudantesReprovados[], int tam, int &a, int &r){
    int ap = 0;
    int rp = 0;
    for(int i=0; i<tam; i++){
        if(vet[i].nota >= 7){
            estudantesAprovados[ap].nome = vet[i].nome;
            estudantesAprovados[ap].idade = vet[i].idade;
            estudantesAprovados[ap].nota = vet[i].nota;
            ap++;
        } else if (vet[i].nota < 7){
            estudantesReprovados[rp].nome = vet[i].nome;
            estudantesReprovados[rp].idade = vet[i].idade;
            estudantesReprovados[rp].nota = vet[i].nota;
            rp++;
        }
    }

}


int main(){
    int tam = 4;
    int a = 0;
    int r = 0;
    Estudante estudantesTotal[tam];
    
    preencher(estudantesTotal, tam, a, r);

    Estudante *estudantesAprovados = new Estudante[a];
    Estudante *estudantesReprovados = new Estudante[r];
    classificar(estudantesTotal, estudantesAprovados, estudantesReprovados, tam, a, r);

    cout << "Aprovados" <<endl;
    imprimir(estudantesAprovados, a);
    cout << "Reprovados" <<endl;
    imprimir(estudantesReprovados, r);

    return 0;
}
