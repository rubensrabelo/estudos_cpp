#include<iostream>

using namespace std;

void copy_string(char* word, char* wordCopy);

int main(){
    char word[] = "Arroz, feijao e macarrao.";

    char wordCopy[50];

    copy_string(word, wordCopy);

    cout << wordCopy << endl;

    return 0;
}

void copy_string(char* word, char* wordCopy) {
    int i = 0;

    while(word[i] != '\0') {
        wordCopy[i] = word[i];
        i++;
    }

    wordCopy[i] = '\0'; 
}