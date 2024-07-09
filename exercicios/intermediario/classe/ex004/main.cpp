#include<iostream>

#include "./include/Library.h"

using namespace std;
using namespace Library;

int main(){
    Book book("AAAA", "Bababa", 1900);

    cout << book << endl;

    system("pause");

    return 0;
}