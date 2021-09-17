#include <iostream>
using namespace std;

struct Date{
    unsigned short int d, m, rrrr;
};

struct Student{
    string name;
    string surname;
    unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatics[5]; 
};

int main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	Student student {"Janusz", "Nowak", 10, {17, 9, 2021}, {5, 2, 5, 4, 3}};
	cout << "Imiê i nazwisko: " << student.name << " " << student.surname << "\nIdentyfikator u¿ytkownika: " 
	<< student.id << "\nData urodzenia: " << student.dateBirthday.d << "-" << student.dateBirthday.m << "-" << student.dateBirthday.rrrr
	<< "r. \n\nOceny z informatyki:\n1 ocena: " << student.gradeInformatics[0]
	<< "\n2 ocena: " << student.gradeInformatics[1]
	<< "\n3 ocena: " << student.gradeInformatics[2]
	<< "\n4 ocena: " << student.gradeInformatics[3]
	<< "\n5 ocena: " << student.gradeInformatics[4];
    return 0;
};
