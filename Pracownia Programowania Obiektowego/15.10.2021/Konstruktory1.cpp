#include <iostream>

using namespace std;

struct Date{
	unsigned short int dd, mm, yyyy;
};

class Worker{
	public:
		unsigned int id;
		string name, surname;
		Date dateBirthday{0,0,0};
		
		void getData();
	
		Worker();
		
		Worker(int id);
		
		Worker(int id, string name, string surname);
	
		Worker(int id, string name, string surname, Date dateBirthday);
		
};

Worker::Worker(int pId, string pName, string pSurname, Date pDateBirthday){
	id=pId;
	name=pName;
	surname=pSurname;
	dateBirthday=pDateBirthday;
};

Worker::Worker(int pId){
	id=pId;
};

Worker::Worker(int pId, string pName, string pSurname){
	id=pId;
	name=pName;
	surname=pSurname;
};

void Worker::getData(){
	cout<<"Identyfikator: "<<id<<"\nImiê i nazwisko: "<<name<<
	" "<<surname<<"\nData urodzenia: "<<dateBirthday.dd<<
	"."<<dateBirthday.mm<<"."<<dateBirthday.yyyy<<"\n\n";
}

main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	Worker nowak(69, "Marek", "Nowak", {11, 1, 2021});
	Worker kowalski(420, "Jan", "Kowalski");
	
	nowak.getData();
	kowalski.getData();
	
	return 0;
}
