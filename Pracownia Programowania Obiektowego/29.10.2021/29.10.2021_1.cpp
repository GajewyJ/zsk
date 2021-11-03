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
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl;
}

Car::Car():
	id{0},
	brand{"Marka"},
	model{"Model"}
{
	cout<<"\nKonstruktor domyœlny\n"<<endl;
}

Car::Car(unsigned int pId, string pBrand, string pModel):
	id{pId},
	brand{pBrand},
	model{pModel}
{
	cout<<"\nKonstruktor parametryczny\n"<<endl;
}

int main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	
	Car fiat;
	fiat.getData();
	
	Car fiat1(69, "Fiat", "Multipla");
	fiat1.getData();
	
	Car fiat2 = Car();
	fiat2.getData();
	
	Car daewoo = Car(420, "Daewoo", "Lublin");
	daewoo.getData();
}
