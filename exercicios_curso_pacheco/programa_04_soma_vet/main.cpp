#include<iostream>

using namespace std;

int main(){
    int vet[10] {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};

    int soma = 0;

    for(int num : vet){
        soma += num;
    }

    cout << soma << endl;

    return 0;
}