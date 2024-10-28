#include "Worker.h"

void Worker::display() const{
	cout << "fullname: " << fullname << "\n"
		<< "position: " << position << "\n"
		<< "year of employment: " << year_of_employment << "\n"
		<< "salary: " << salary << "\n"
		<< "_________________________________\n";
}


void Worker::experience(Worker* workers, double experience_year) const{
	for (int i = 0; i < 2; i++) {
		if (2024 - workers[i].year_of_employment  > experience_year) {
			workers[i].display();
		}
	}
}

void Worker::salary_outtop(Worker* workers, double salary_f) const{
	for (int i = 0; i < 2; i++) {
		if (workers[i].salary > salary_f) {
			workers[i].display();
		}
	}
}


void Worker::same_position(Worker* workers, char* position_f)const {
	for (int i = 0; i < 2; i++) {
		if (!(strcmp(workers[i].position,position_f))) {
			workers[i].display();
		}
	}
}