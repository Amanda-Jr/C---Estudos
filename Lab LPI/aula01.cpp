// aula1 - crie duas variáveis, um inteiro e um real, imprima. Inverta os valores, imprima novamente.

#include <iostream>
using namespace std;

/*
int main()
{
    int x;
    float y;
    int z;

    x = 5;
    y = 4.5;

    cout << "O valor de A é: " << x << endl;
    cout << "O valor de B é: " << y << endl;

    z = y;
    y = x;
    x = z;

    cout << "O valor de A é " << x << endl;
    cout << "O valor de B é " << y << endl;
    cout << "O valor de C é " << z << endl; // rever essa parte depois

    return 0;
}
*/
int main(){
    int aprovado;
    cout << "Digite 1 se aprovado em Lógica e 0 se reprovado " << endl;
    cin >> aprovado;

    if(aprovado){
        cout << "Parabéns pela aprovação! Voce pode se matricular em LP1" << endl;
    } else {
        cout << "Infelizmente, você não pode se matricular em LP1.";
    }

    return 0;
}