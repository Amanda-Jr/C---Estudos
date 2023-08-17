//If e Else 

#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num%2==0){
        cout << "O número digitado é par" << endl;
    } 
    else {
        cout << "O número digitado é ímpar" << endl;
    }

    return 0;
}