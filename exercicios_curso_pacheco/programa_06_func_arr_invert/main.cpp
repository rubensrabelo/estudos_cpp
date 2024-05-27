#include<iostream>
#include<array>

using namespace std;

void inverter_vetor(int vet[], int tam);

int main(){
    int vet[] {1, 2, 3, 4, 5};

    int tam = sizeof(vet) / sizeof(int);

    inverter_vetor(vet, tam);

    for(int i = 0; i < tam; i++){
        cout << vet[i] << " ";
    }
    cout << endl;

    return 0;
}

void inverter_vetor(int vet[], int tam){
    for(int i = 0; i < tam/2; i++){
        int temp = vet[i];
        vet[i] = vet[tam - i - 1];
        vet[tam - i - 1] = temp;
    }
}