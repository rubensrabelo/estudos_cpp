#include<iostream>
#include<vector>
#include<random>
#include<ctime>

using namespace std;

int main(){
    mt19937 gerador(time(nullptr));
    uniform_int_distribution<int> distribuicao(0, 10);

    int qtd = distribuicao(gerador);

    vector<int> numeros; 

    for(int i = 0; i<qtd; i++){
        int valor = distribuicao(gerador);
        numeros.push_back(valor);
    }

    for(int numero : numeros) {
        cout << numero << "\n";
    }

    return 0;
}