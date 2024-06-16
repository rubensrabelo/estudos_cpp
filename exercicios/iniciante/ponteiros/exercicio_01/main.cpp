#include<iostream>
#include <random>
#include<ctime>

using namespace std;

int main(){
    mt19937 gerador(time(nullptr));
    uniform_int_distribution<int> distribuicao(0, 10);

    int num = distribuicao(gerador);

    int* ptr = nullptr;
    
    ptr = &num;

    cout << "O valor da variavel num e " << *ptr << endl;

    return 0;
}