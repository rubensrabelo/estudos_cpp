#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Author{
    string name;
    string country;
};

struct Book{
    string name;
    int pages;
    Author author;
};

int main(){
    vector<Book> books;

    Book book1;
    book1.name = "Aventuras na Floresta";
    book1.pages = 250;
    book1.author.name = "Maria Silva";
    book1.author.country = "Brasil";

    books.push_back(book1);

    Book book2;
    book2.name = "O Mistério do Relógio Quebrado";
    book2.pages = 180;
    book2.author.name = "Pedro Almeida";
    book2.author.country = "Portugal";
    books.push_back(book2);

    for(const auto& book : books) {
        cout << "--------------------------" << endl;
        cout << "Livro: " << book.name << endl;
        cout << "Páginas: " << book.pages << endl;
        cout << "Autor: " << book.author.name << " (" << book.author.country << ")" << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}