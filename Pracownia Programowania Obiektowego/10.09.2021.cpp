#include <iostream>

using namespace std;

class Worker{
	//deklaracja zmiennych cz³onkowskich (pola, cechy, w³aœciwoœci)
	public:
		string name;
		string surname;
		short int birthYear;
		string nationality;
		float height;
		char gender;
	
	//definicja funkcji cz³onkowskiej (metody)
	void showName(){
		cout<<"\nImiê pracownika: "<<name;
	}
		
	//deklaracja funkcji cz³onkowskiej (prototyp)
	void showSurname();
	void showNameSurname();
	void showAllData();
};

//definicja metody showSurname
void Worker::showSurname(){
	cout<<"\nNazwisko pracownika: "<<surname<<endl;
}

void Worker::showNameSurname(){
	cout<<"Imiê i nazwisko pracownika: "<<name<<" "<<surname<<"\n";
}

void Worker::showAllData(){
	cout<<"\nDane pracownika:\n";
	showNameSurname();
	cout<<"Narodowoœæ: "<<nationality<<"\nRok urodzenia: "<<birthYear<<", Wzrost: "<<height<<" cm\nP³eæ: ";
	switch(gender){
		case 'm':
			cout<<"mê¿czyzna\n";
			break;
		case 'w':
			cout<<"kobieta\n";
			break;
		default:
			cout<<"-\n";
			break;
	}
}

int main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	Worker janusz;
	janusz.name="Janusz";
	janusz.surname="Nowak";
	janusz.birthYear=1985;
	janusz.nationality="Polak";
	janusz.height=182;
	janusz.gender='m';
//	janusz.age=18;
//	cout<<janusz.name;
//	cout<<"\nImiê i nazwisko: "<<janusz.name<<" "<<janusz.surname<<"\n\n";	
	janusz.showName();
	janusz.showSurname();
	janusz.showNameSurname();
	janusz.showAllData();
	return 0;
}
