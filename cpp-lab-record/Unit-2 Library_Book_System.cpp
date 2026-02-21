#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    int bookID;
    char title[100];
    char author[50];

public:
    
    Book() {
        bookID = 0;
        strcpy(title, "No Title");
        strcpy(author, "No Author");
    }

    Book(int id, const char* t, const char* a) {
        bookID = id;
        strcpy(title, t);
        strcpy(author, a);
    }

    
    ~Book() {
        cout << "Destructor called for Book ID: " << bookID << endl;
    }

    void display() const {
        cout << "Book ID: " << bookID << ", Title: " << title << ", Author: " << author << endl;
    }

    int getBookID() const {
        return bookID;
    }
};

class Library {
private:
    static const int MAX_BOOKS = 5;
    Book books[MAX_BOOKS]; 
    int bookCount;

public:
    Library() : bookCount(0) {}

    
    bool addBook(const Book& b) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount] = b;  
            bookCount++;
            return true;
        } else {
            cout << "Library is full! Cannot add more books." << endl;
            return false;
        }
    }

 
    Book getBookByID(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].getBookID() == id) {
                return books[i];
            }
        }
 
        return Book();
    }

    void displayAllBooks() const {
        cout << "\nAll Books in Library:" << endl;
        for (int i = 0; i < bookCount; i++) {
            books[i].display();
        }
    }
};

int main() {
    Library lib;

 
    Book bookArray[3] = {
        Book(101, "1984", "George Orwell"),
        Book(102, "To Kill a Mockingbird", "Harper Lee"),
        Book(103, "The Great Gatsby", "F. Scott Fitzgerald")
    };

 
    for (int i = 0; i < 3; i++) {
        lib.addBook(bookArray[i]);
    }

    lib.displayAllBooks();

 
    int searchID = 102;
    cout << "\nSearching for Book ID: " << searchID << endl;
    Book foundBook = lib.getBookByID(searchID);
    foundBook.display();

    return 0;
}
