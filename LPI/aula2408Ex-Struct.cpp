#include <iostream>
using namespace std;

/*
Faça um programa que leia os dados referentes a 10 candidatos de um concurso de analistas. 
Sobre cada candidato armazene nome, telefone, idade e nota da prova.
Em seguida, informe o candidato classificado pela nota da prova. Em caso de empate, o candidato mais velho será classificado
*/

struct Candidato {
    string nome;
    string telefone;
    int idade;
    double notaProva;
};

void candidatosConcurso(Candidato vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Candidato " << i+1 << ": " << endl;
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Telefone: ";
        cin >> vet[i].telefone;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "Nota da prova: ";
        cin >> vet[i].notaProva; 
        cout << endl;
    }
}

int classificado(Candidato vet[],int tam){
    int vencedor = 0;
    for(int i=1; i<tam; i++){
        if(vet[i].notaProva > vet[vencedor].notaProva){
            vencedor = i;
        } else if(vet[i].notaProva == vet[vencedor].notaProva){
            if(vet[i].idade > vet[vencedor].idade){
                vencedor = i;
            }
        }
    }

    return vencedor;
}



int main(){
    const int tam = 5;
    Candidato vet_cadidatos[tam];

    candidatosConcurso(vet_cadidatos, tam);
    int indexVencedor = classificado(vet_cadidatos, tam);

    cout << "Candidato Classificado:" << endl;
    cout << vet_cadidatos[indexVencedor].nome << endl;
    cout << "Telefone: " << vet_cadidatos[indexVencedor].telefone << endl;

    return 0;
}