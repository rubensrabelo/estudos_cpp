#include<iostream>
#include<cstring>

using namespace std;

void diagonal(char *letter, int tam);

int main(){
    char *word = new char[100];

    strcpy(word, "Wladimir");

    diagonal(word, 0);

    delete[] word;

    return 0;
}

void diagonal(char *letter, int tam) {
    if(*letter == '\0') {
        return;
    } else {
        for(int i = 0; i<tam; i++) {
            cout << " ";
        }

        cout << letter[0] << endl;

        diagonal(letter + 1, tam+1);
    }
}