#include<iostream>

using namespace std;

void reversedWord(char *word);
void copyWord(char *copy, char *word);
int sizeWord(char *word);

int main(){
    char word[20] = "Macarrao";

    reversedWord(word);

    cout << "The reversed word is " << word << endl;

    return 0;
}

void reversedWord(char *word){
    char otherWord[20];
    copyWord(otherWord, word);
    int i = sizeWord(word);
    int j = 0;

    while(i >= 0) {
        word[j] = otherWord[i];
        j++;
        i--;
    }

    word[j] = '\0';
}

void copyWord(char *copy, char *word) {
    int i = 0;
    while(word[i] != '\0') {
        copy[i] = word[i];
        i++;
    }
}

int sizeWord(char *word) {
    int i = 0;
    while(word[i] != '\0') {
        i++;
    }

    return i;
}