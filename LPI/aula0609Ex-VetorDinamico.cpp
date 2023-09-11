#include <iostream>
using namespace std;

/*
Faça um programa para realizar a correção automática de uma prova. 
Inicialmente, o usuário informa quantas questões tem a prova e quantos alunos responderam.
Na sequência, informa o gabarito e as respostas de cada aluno.
Informe a nota que cada aluno obteve, sabendo que a nota máxima é 10 e é proporcional ao n° de questões corretas
*/

void preencherGabarito(char vet[], int tam){
    cout << "Gabarito" << endl;
    for(int i=0; i<tam; i++){
        cout << "Questão "<<i+1<<": " << endl;
        cin >> *(vet +i); // vet[i] -> conteúdo do ponteiro na posição inicial + i

    }
}

void respostaAlunos(int aluno, char gab[], int quest){

    for(int i=0; i<aluno; i++){
        int acertos = 0;
        char resp;
        cout << "Aluno " << i+1 << endl;

        for(int j=0; j<quest; j++){
            cout << "Resposta questão " << j+1 << ": " << endl;
            cin >> resp;
            if(resp == gab[j]){
                acertos++;
            }
        }

        float nota;
        nota = (10/float(quest))*acertos;
        cout<< "Nota: " << nota << endl;  
        cout<<endl;
    }
    
}



int main(){

    int quest;
    int aluno;
    char *gabarito;

    cout << "Quantas questões tem a prova? ";
    cin >> quest;

    gabarito = new char [quest];
    preencherGabarito(gabarito, quest);

    cout << "Quantos alunos fizeram a prova? ";
    cin >> aluno;

    respostaAlunos(aluno, gabarito, quest);

    return 0;
}