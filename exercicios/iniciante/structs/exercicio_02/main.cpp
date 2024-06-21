#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Aluno{
    int matricula;
    string nome;
};

int main(){
    int matriculas[] {1, 2, 3};
    string nomes[] {"Lucas", "Rodolfo", "Sabrina"};

    vector<Aluno> alunos;

    for(int i=0; i<3; i++){
        Aluno aluno;
        aluno.matricula = matriculas[i];
        aluno.nome = nomes[i];

        alunos.push_back(aluno);
    }

    for(int i=0; i<3; i++){
        cout << "--------------------------------------------" << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;
    }

    return 0;
}