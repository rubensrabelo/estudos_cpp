#include<iostream>
#include<string>

using namespace std;

int countString(void* letters);

int main(){
    char word[] = "Ola Mundo!";
   
    int size = countString(word);
    
    cout << "The size of the word is " << size  << endl;

    return 0;
}

int countString(void* letters){
    char* letter = static_cast<char*>(letters);
    int i = 0;
    
    while(letter[i] != '\0'){
        i++;
    }

    return i;
}