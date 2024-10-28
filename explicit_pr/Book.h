#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Book
{

	char* author;
	char* book_name;
	char* publisher;
	int year;
	int pages;
public:
	static int count;
	explicit Book(const char* author_f, const char* book_name_f, const char* publisher_f, int year_f, int pages_f) :
		author{author_f ? new char[strlen(author_f) + 1]:nullptr},
		book_name{ book_name_f ? new char[strlen(book_name_f) + 1] : nullptr },
		publisher{ publisher_f ? new char[strlen(publisher_f) + 1] : nullptr }, year{ year_f }, pages{ pages_f } {
		if (author_f) {
			strcpy_s(author, strlen(author_f) + 1, author_f);
		}
		if (book_name_f) {
			strcpy_s(book_name, strlen(book_name_f) + 1, book_name_f);
		}
		if (publisher_f) {
			strcpy_s(publisher, strlen(publisher_f) + 1, publisher_f);
		}
	}
	
	Book() : Book{ nullptr, nullptr,nullptr, 0,0 } {}

	Book(const char* author_f) : Book{author_f, nullptr,nullptr, 0,0 } {}
	Book(const char* author_f, const char* book_name_f) : Book{ author_f, book_name_f,nullptr, 0,0 } {}
	Book(const char* author_f, const char* book_name_f, const char* publisher_f) : Book{ author_f, book_name_f,publisher_f, 0,0 } {}
	Book(const char* author_f, const char* book_name_f, const  char* publisher_f, int year) : Book{ author_f,book_name_f,publisher_f,year,0 } {}


	//Book(const Book& obj) :author{ new char[strlen(obj.author)] }, book_name{ new char[strlen(obj.author)] }


	void print_info();
	void find_author(Book*,char* str);
	void find_books(Book* b, char* author);
	void find_publisher(Book* b, char* publisher);
	void find_year(Book* b, int year);
	~Book() {
		/*if (author) delete[] author;
		else if (book_name) delete[] book_name;
		else if (publisher) delete[] publisher;*/
		delete[] author;
		delete[] book_name;
		delete[] publisher;
	}
};

