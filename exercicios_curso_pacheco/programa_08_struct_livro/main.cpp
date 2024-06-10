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

void mostrarLivro(Livro livro);

int main(){
    Livro livro;
    livro.id = 1;
    livro.titulo = "As aventuras do pequeno Joao A";
    livro.autor = "Joao A";
    livro.editora = "A";
    livro.ano = 2019;

    mostrarLivro(livro);
    
    return 0;
}

void mostrarLivro(Livro livro){
    cout << "O livro cadastro foi: " << endl;
    cout << "Titulo: " << livro.titulo << endl;
    cout << "Autor: " << livro.autor << endl;
    cout << "Editora: " << livro.editora << endl;
    cout << "ano: " << livro.ano << endl;
}