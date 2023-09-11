#include <iostream>
using namespace std;

int main(){

    int a = 5;
		
	//incrementa antes, imprime depois
	cout << ++a <<endl; 
	cout << --a <<endl; 
		
	//imprime antes, incrementa depois
	cout << a++ <<endl; 
	cout << a-- <<endl; 
    

    return 0; 
}