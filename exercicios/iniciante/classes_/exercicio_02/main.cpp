#include<iostream>
#include<string>

using namespace std;

class Pessoa{
    public:
        Pessoa(string nome, string sobrenome){
            this->nome = nome;
            this->sobrenome = sobrenome;
        }

        string getNome(){
            return this->nome;
        }
        string getSobrenome(){
            return this->sobrenome;
        }

        void setNome(string nome){
            this->nome = nome;
        }

        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        string nomeCompleto(){
            return this->nome + " " + this->sobrenome;
        }
    private:
        string nome;
        string sobrenome;
};

int main(){
    Pessoa pessoa("Lucas", "Santos");

    cout << "Seja bem-vindo, " << pessoa.nomeCompleto() << "!" << endl;

    return 0;
}