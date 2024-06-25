#include<iostream>

using namespace std;

bool compareWords(char *word1, char *word2);

int main(){
    char word1[] = "arroz";
    char word2[] = "Arroz";

    if(compareWords(word1, word2)) cout << "The words are the same" << endl;
    else cout << "The words are different" << endl;

    return 0;
}

bool compareWords(char *word1, char *word2){
    int i = 0;
    while(word1[i] != '\0') {
        if(word2[i] == '\0') break;

        if(tolower(word1[i]) != tolower(word2[i])) return false;

        i++;
    }

    return true;
}