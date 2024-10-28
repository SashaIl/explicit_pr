#include <iostream>
using namespace std;


//class Date {
//    int day;
//    int month;
//    int year;
//public:
//    Date(int d, int m, int y) :day{ d }, month{ m }, year{ y } {}
//
//    void showDate() const{
//        cout << "c: " << day << "." << month << "." << year;
//    }
//    void showDate() {
//        cout << "d: " << day << "." << month << "." << year;
//    }
//};
//
//int main()
//{
//    std::cout << "Hello World!\n";
//    const Date myBirthday(16, 6, 2006);
//
//    myBirthday.showDate();
//}


//class Mas {
//public:
//	int size;
//	int* mas;
//public:
//	explicit Mas(int s) : size{ s }, mas{ new int[size] } {
//		for (int i = 0; i < size; i++) {
//			mas[i] = rand() % 100;
//		}
//	}
//};
//
//void showMas(Mas m) {
//
//	for (int i = 0; i < m.size; i++) {
//		cout << m.mas[i] << " ";
//	}
//	cout << "\n";
//}
//int main() {
//	Mas m{ 10 };
//	showMas(m);
//
//}

#include "Book.h"
#include "Worker.h"
int main() {
	
	//EX 1
	//Book books[]{
	//	Book("Shevchenko", "Kobzar", "Prosvita", 1899, 210),
	//	Book("Shevchenko", "Knyga", "dom", 1201, 120),
	//	Book("Franko", "Lis", "Bazar", 2001, 1021)
	//};
	//Book b;

	//char* str{ new char[11] {"Shevchenko"} };
	//char* str1{ new char[11] {"Prosvita"} };
	//b.find_author(books, str);
	//b.find_books(books, str);
	//b.find_publisher(books,str1);


	/*for (int i = 0; i < 2; i++) {
		books[i].print_info();
		cout << endl;
	}*/


	
	//EX 2
	Worker workers[]{
		Worker{(char*)"Gianluigi Buffon",(char*)"Goalkeaper",2001,8000},
		Worker{(char*)"Leo Pepsi",(char*)"Left winger",2024,15000.14}
	};
	char* pos{ new char[12] {"Left winger"} };
	Worker const w;
	cout << "\EXERIENCE\n\n";
	w.experience(workers, 10);

	cout << "\nSALARY\n\n";
	w.salary_outtop(workers, 7500);

	cout << "\POSITION\n\n";
	w.same_position(workers, pos);
}