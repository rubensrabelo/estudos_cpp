#include "../include/Library.h"

namespace Library {
    Book::Book(std::string title, std::string author, int publicationYear){
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
    }

    void Book::setTitle(std::string title){
        this->title = title;
    }

    std::string Book::getTitle(){
        return this->title;
    }

    void Book::setAuthor(std::string author){
        this->author = author;
    }

    std::string Book::getAuthor(){
        return this->author;
    }
    
    void Book::setPublicationYear(int publicationYear){
        this->publicationYear = publicationYear;
    }

    int Book::setPublicationYear(){
        return this->publicationYear;
    }

    std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << "Book: title=" << book.title << ", author=" << book.author << ", Publication Year="<< book.publicationYear << "\n";
        return os;
    }
}