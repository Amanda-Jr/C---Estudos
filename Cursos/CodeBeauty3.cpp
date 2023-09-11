//ASCII table

#include <iostream>
using namespace std;

int main(){

    char c1,c2,c3,c4,c5;

    cout << (int)'a' << endl; //casting operator
    cout << int('A') << endl;
    cout << char(65) << endl;

    cout << "Escreva 5 letras: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;

    cout << "Seu texto foi convertido para ASCII: " << int(c1) << " " << int(c2) << " " << int(c3) << " "<< int(c4) << " " << int(c5) << endl;


    return 0;

}

