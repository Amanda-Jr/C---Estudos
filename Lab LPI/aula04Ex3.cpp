#include <iostream>
using namespace std;

/*
Escreva um programa que solicita ao usuário a quantidade de alunos de uma turma. 
Crie um struct para as notas (números reais) da unidade( atividade, projeto e prova).
Calcule a média de cada aluno e depois calcule a média da turma usando um array dinâmico)
Depois de ler as notas, imprime a média aritmética (adaptada da questão 3)
*/

struct notas{
    double atv;
    double projeto;
    double prova;
};

void media_aluno(int aluno, notas mediaAluno[], double mediaSala[]){
    for(int i=0; i<aluno; i++){
        cout << "Notas do Aluno " << i+1 << ": ";
        cout << "Nota de atividade: ";
        cin >> mediaAluno[i].atv;
        cout << "Nota do projeto: ";
        cin >> mediaAluno[i].projeto;
        cout << "Nota da prova: ";
        cin >> mediaAluno[i].prova;
        cout << endl;

        mediaSala[i] = double(mediaAluno[i].atv + mediaAluno[i].projeto + mediaAluno[i].prova)/3;
    }

}

double media_sala(int aluno, double mediaSala[]){
    double media = 0;
    for(int i=0; i<aluno; i++){
        media = media + mediaSala[i];
    }

    return (media/aluno);
}

int main(){
    int alunos;
    cout << "Quantos são os alunos? ";
    cin >> alunos;

    double *mediaSala = new double[alunos];
    notas mediaAluno[alunos];

    media_aluno(alunos, mediaAluno, mediaSala);
    cout << "A média da sala foi: " << media_sala(alunos, mediaSala) << endl;

    return 0;
}