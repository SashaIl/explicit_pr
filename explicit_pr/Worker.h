#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Worker
{

	char* fullname;
	char* position;
	int year_of_employment;
	double salary;

public:
	explicit Worker(char* fullname_f, char* position_f, int year_of_employment_f, double salary_f) :
		fullname{ fullname_f ? new char[strlen(fullname_f) + 1] : new char[8] },
		position{ position_f ? new char[strlen(position_f) + 1] : new char[8] },
		year_of_employment{ year_of_employment_f },
		salary{ salary_f } 
	{
		if (fullname_f) {strcpy_s(fullname, strlen(fullname_f) + 1, fullname_f);}
		else {strcpy_s(fullname, 8, "Unknown");}
		
		if (position_f) { strcpy_s(position, strlen(position_f) + 1, position_f); }
		else {strcpy_s(position, 8, "Unknown");}
	}


	Worker() :Worker{ (char*)"Unknown",(char*)"Unknown",0,0 } {}

	Worker(const Worker& obj) :
		fullname{ obj.fullname }, position{ obj.position }, year_of_employment{ obj.year_of_employment }, salary{ obj.salary } 
	{
		if (obj.fullname) { strcpy_s(fullname, strlen(obj.fullname) + 1, obj.fullname); }
		else { strcpy_s(fullname, 8, "Unknown"); }

		if (obj.position) { strcpy_s(position, strlen(obj.position) + 1, obj.position); }
		else { strcpy_s(position, 8, "Unknown"); }
	}

	~Worker() {
		delete[] fullname;
		delete[] position;
	}

	void display() const;
	void experience(Worker*, double)const;
	void salary_outtop(Worker*, double)const;
	void same_position(Worker*, char*)const;
};

