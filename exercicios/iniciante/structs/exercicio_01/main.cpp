#include<iostream>
#include<string>
#include <limits>

using namespace std;

struct Aluno{
    int matricula;
    string nome;
};

void mostrarAluno(Aluno aluno);

int main(){
    Aluno aluno;

    cout << "Digite a matricula do aluno: " << endl;
    cin >> aluno.matricula;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Digite o nome do aluno: " << endl;
    getline(cin, aluno.nome);

    mostrarAluno(aluno);

    return 0;
}

void mostrarAluno(Aluno aluno){
    cout << endl;
    cout << "Matricula: " << aluno.matricula << ";" << endl;
    cout << "Nome: " << aluno.nome << ";" << endl;
}