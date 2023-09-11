//Condicionais e operadores

#include <iostream>
using namespace std;

int main(){

    float a,b,c;

    cout << "Digite os lados do triângulo: ";
    cin >> a >> b >> c;

    if (a==b && b==c){
        cout << "Triângulo Equilátero"<< endl;
    } else if (a!=b && a!=c && b!=c)
    {
        cout << "Triângulo escaleno"<< endl;
    } else {
        cout << "Triângulo isósceles"<< endl;
    }
    
     
    
    return 0;
}