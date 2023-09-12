/*
Escreva um programa que armazena os dados relacionados a um livro (nome, autor, ano, preço) em uma estrutura de dados do tipo struct.
Crie rotinas para ler e para imprimir os dados desse tipo de registro.
Leia e imprima para 3 diferentes filmes.
*/

#include <iostream>
using namespace std;

struct livro {
    string nome;
    string autor;
    int ano;
    double preco;
};

void ler_livro(livro vet[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Livro " << i+1 << endl;
        cout << "Nome do livro: ";
        cin >> vet[i].nome;
        cout << "Autor do livro: ";
        cin >> vet[i].autor;
        cout << "Ano de lançamento do livro: ";
        cin >> vet[i].ano;
        cout << "Preço do livro: ";
        cin >> vet[i].preco;
        cout << endl;
    }
}

void imprimir_livro(livro vet[], int tam){
    cout << "-----------Lista de livros-----------" << endl;
    for(int i=0; i<tam; i++){
        cout << "Nome: " << vet[i].nome << endl;
        cout << "Autor: " << vet[i].autor << endl;
        cout << "Lançamento: " << vet[i].ano << endl;
        cout << "Preço: " << vet[i].preco << endl;
        cout << endl;
    }
}

int main(){
    int tam = 3;
    livro vet_livros[tam];

    ler_livro(vet_livros, tam);
    imprimir_livro(vet_livros, tam);


    return 0;
}