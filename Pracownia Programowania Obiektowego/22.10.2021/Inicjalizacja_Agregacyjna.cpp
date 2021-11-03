#include <iostream>

using namespace std;

class Car{
	public:
		unsigned int id;
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"\nIdentyfikator: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\n";
}

Car::Car(){
	id=0;
	brand="Domyœlna marka";
	model="Domyœlny model";
	cout<<"Konstruktor domyœlny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
	cout<<"Konstruktor parametryczny\n";
}

main(){
	setlocale(LC_CTYPE, "polish");
	
	Car car = Car{69, "Fiat", "Panda"};
	car.getData();
	
	Car car1(2137, "Daewoo", "Lublin");
	car1.getData();
}
