#pragma once

#include<iostream>
#include<string>

namespace Library {
    class Book {
        public:
            Book(std::string title, std::string author, int publicationYear);

            void setTitle(std::string title);

            std::string getTitle();

            void setAuthor(std::string author);
            std::string getAuthor();
            
            void setPublicationYear(int publicationYear);

            int setPublicationYear();

            friend std::ostream& operator<<(std::ostream& os, const Book& book);
            
        private:
            std::string title;
            std::string author;
            int publicationYear;
    };
}
