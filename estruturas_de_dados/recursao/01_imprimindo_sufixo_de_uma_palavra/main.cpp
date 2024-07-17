#include<iostream>
#include<cstring>

using namespace std;

void printing_suffix(char *letter, int tam);

int main(){
    char *word = new char[100];
    
    strcpy(word, "Rubens");

    printing_suffix(word, strlen(word));

    delete[] word;

    return 0;
}

void printing_suffix(char *letter, int tam) {
    if(tam == -1) {
        return;
    } else {
        int i = tam;
        while(letter[i] != '\0') {
            cout << letter[i];
            i++;
        }

        cout << endl;
        
        printing_suffix(letter, tam - 1);
    }
}