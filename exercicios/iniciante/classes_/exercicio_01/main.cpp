#include<iostream>
#include<string>

using namespace std;

class Aluno{
    public:
        Aluno(int matricula, string nome){
            this->matricula = matricula;    
            this->nome = nome;
        }

        int getMatricula() const {
            return this->matricula;
        }

        string getNome() const {
            return this->nome;
        }

        void setNome(string nome){
            this->nome = nome;
        }  

    private:
        int matricula;
        string nome;
};

int main(){
    Aluno aluno(1, "Rodolfo");

    cout << "Matricula: " << aluno.getMatricula() << endl;
    cout << "Nome: " << aluno.getNome() << endl;

    return 0;
}