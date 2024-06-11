#include<iostream>
#include<string>

using namespace std;

struct Livro{
    int id;
    string titulo;
    string autor;
    string editora;
    int ano;
};

void mostrarLivros(Livro vetor[], int qtd);

int main(){
    Livro livros[3] = {
        {1, "Dom Casmurro", "Machado de Assis", "Editora ABC", 1899},
        {2, "O Alquimista", "Paulo Coelho", "Editora XYZ", 1988},
        {3, "Cem Anos de Solidao", "Gabriel Garcia Marquez", "Editora DEF", 1967}
    };

    mostrarLivros(livros, 3);

    return 0;
}

void mostrarLivros(Livro vetor[], int qtd){
    for(int i = 0; i < qtd; i++){
    cout << "--------INFORMACAO LIVRO:--------" << "\n";
        cout << "Titulo: " << vetor[i].titulo << endl;
        cout << "Autor: " << vetor[i].autor << endl;
        cout << "Editora: " << vetor[i].editora << endl;
        cout << "ano: " << vetor[i].ano << endl;
    cout << "---------------------------------" << "\n";
    }
}
