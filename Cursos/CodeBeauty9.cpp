//Operador ternário - pode ser usado para diferentes tipos de dados

#include <iostream>
using namespace std;

int main(){

    int secreto, resposta;
    secreto = 5;
    

    cout << "Adivinhe o número secreto: " << endl;
    cin >> resposta;

    (secreto == resposta)? cout << "Você acertou!": cout << "Você errou!";
    
    return 0;
}