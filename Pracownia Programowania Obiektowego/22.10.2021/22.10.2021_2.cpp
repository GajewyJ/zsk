#include <iostream>

using namespace std;

class Car{
	public:
		unsigned int id {10};
		string brand {"Ferrari"};
		string model {"F430"};
		
		void getData();
		
		Car(unsigned int pId=2, string pBrand="Audi", string pModel="A6");
};

void Car::getData(){
	cout<<"Identyfikator: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
}

main(){
	setlocale(LC_CTYPE, "polish");
	
	Car car(1, "Volkswagen", "Passat");
	Car car1=Car(2137, "Opel", "Blitz");
	
	car.getData();
	car1.getData();
	
	Car scania(69, "Scania", "R320");
	scania.getData();
}
