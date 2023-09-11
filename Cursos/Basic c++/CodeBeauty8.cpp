//Switch case
#include <iostream>
using namespace std;

int main(){

    float num1, num2;
    char operacao;

    cout << "Calculadora" << endl;
    cout << "Escreva os números e a operação(+-/*). Ex: 2+3" << endl;
    cin >> num1 >> operacao >> num2;

    switch(operacao){
        case '+': cout << num1 << operacao << num2 << " = " << num1+num2 << endl; break;
        case '-': cout << num1 << operacao << num2 << " = " << num1-num2 << endl; break;
        case '*': cout << num1 << operacao << num2 << " = " << num1*num2 << endl; break;
        case '/': 
            if (num2 == 0){
                cout << "Operação inválida!" << endl;
            } else {
                cout << num1 << operacao << num2 << " = " << num1/num2 << endl; break;
            }
        default: cout << "Operação inválida!" << endl;
    }

    return 0;
}