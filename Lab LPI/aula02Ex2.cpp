#include <iostream>
using namespace std;

//switch case
/*
2- crie uma função que receba  três notas de um aluno (em float) como parâmetro e uma letra.
Se a letra for A a função deve calcular a média aritmética das notas, se for P deve calcular a média ponderada com pesos 5, 3 e 2.
Retorne a média.
*/

void media(float n1, float n2, float n3, char op){
    float media;

    switch(op){
        case 'A':
        case 'a':
            media = (n1+n2+n3)/3;
            cout << "A média aritmética é "<< media <<endl;
            break;
        case 'P':
        case 'p':
            media = ((n1*5)+(n2*3)+(n3*2))/10;
            cout << "A média pondeada é "<< media <<endl;
            break;
    }
}

int main(){
    float nota1;
    float nota2;
    float nota3;
    char opcao;

    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;
    cout << "Digite a nota 3: ";
    cin >> nota3;

    cout << "Para calcular média ponderada digite 'P', para média aritmética digite 'A': ";
    cin >> opcao;

    media(nota1, nota2, nota3, opcao);


    return 0;
}