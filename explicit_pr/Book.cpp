#include "Book.h"

int Book::count{ 0 };
void Book::print_info() {
    cout << "Author: " << (author ? author : "Unknown") << endl;
    cout << "Title: " << (book_name ? book_name : "Untitled") << endl;
    cout << "Publisher: " << (publisher ? publisher : "Unknown") << endl;
    cout << "Year: " << year << endl;
    cout << "Pages: " << pages << endl;
}

void Book::find_author(Book* b,char* str) {
    for (int i = 0; i < 2; i++) {
        if (!strcmp(str, b[i].author)) {
            b[i].print_info();
        }
    }
}

void Book::find_books(Book* b, char* author) {
    for (int i = 0; i < 2; i++) {
        if (!strcmp(author, b[i].author)) {
            cout << b[i].book_name;
            break;
        }
    }
}

void Book::find_publisher(Book* b, char* publisher) {
    for (int i = 0; i < 2; i++) {
        if (!strcmp(publisher, b[i].publisher)) {
            cout << b[i].book_name;
            break;
        }
    }
}

void Book::find_year(Book* b, int year) {
    for (int i = 0; i < 2; i++) {
        if (year > b[i].year) {
            cout << b[i].book_name;
            break;
        }
    }
}