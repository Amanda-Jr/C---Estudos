//calculadora imc
#include <iostream>

using namespace std;

int main (){

    float m,kg,imc;

    cout << "Qual sua altura em metros?" << endl;
    cin >> m;
    cout << "Qual seu peso em quilos?" << endl;
    cin >> kg;

    imc = kg/(m*m); // pow(m,2) - potência

    if (imc < 18.5){
        cout << "Seu IMC é "<< imc <<" e você está baixo do peso"<<endl;
    } else  if (imc > 25){
        cout << "Seu IMC é "<< imc <<" e você está acima do peso"<<endl;
    } else {
        cout << "Seu IMC é "<< imc <<" e você está com peso normal"<<endl;
    }
    
    return 0;
}


