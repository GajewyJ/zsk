#include <iostream>

using namespace std;

class Car{
	public:
		unsigned short int id {10};
		string brand {"Ferrari"};
		string model {"F430"};
		
		void getData();
		
		Car();
		Car(unsigned short int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"Identyfikator: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\n";
}

//Car::Car(){
//	cout<<"Konstruktor bezparametrowy\n";
//}

Car::Car(){
	id=3;
	brand="Fiat";
	model="126p";
}

Car::Car(unsigned short int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
}

main(){
	setlocale(LC_CTYPE, "polish");
	
	Car car;
	Car car1=Car();
	
	car.getData();
	car1.getData();
	
	
}
