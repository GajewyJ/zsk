#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle&);
		
		void catchSides(double&, double&);
		void setSides(double sideA, double sideB);
		double area();
		double cicuit();
		void getSides();
};

Rectangle::Rectangle(){
	cout<<"Konstruktor domyœlny\n";
}

Rectangle::Rectangle(double pSideA, double pSideB){
	sideA = pSideA;
	sideB = pSideB;
	cout<<"Konstruktor parametryczny\n";
}

Rectangle::Rectangle(const Rectangle& model){
	sideA=model.sideA;
	sideB=model.sideB;
	cout<<"Konstruktor kopiuj¹cy\n";
}

void Rectangle::catchSides(double &pSideA, double &pSideB){
	pSideA = sideA;
	pSideB = sideB;
}

void Rectangle::setSides(double pSideA, double pSideB){
	sideA=pSideA;
	sideB=pSideB;
}

void Rectangle::getSides(){
	cout<<"Bok a: "<<sideA<<"\nBok B: "<<sideB<<endl;
}

double Rectangle::area(){
	return (sideA * sideB);
}

double Rectangle::cicuit(){
	return (2*sideA + 2*sideB);
}

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}


int main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	
	double a=2, b=3;
	
	cout<<"Pierwszy prostok¹t: "<<endl;
	Rectangle prostokat1(20, 30);
	prostokat1.getSides();
	prostokat1.catchSides(a, b);
	prostokat1.getSides();
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	
	cout<<"\nDrugi prostok¹t: "<<endl;
	Rectangle prostokat2=prostokat1;
	prostokat2.getSides();
	prostokat2.catchSides(a, b);
	prostokat2.getSides();
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	
	cout<<"\nTrzeci prostok¹t: "<<endl;
	Rectangle prostokat3(prostokat1);
	prostokat3.getSides();
	prostokat3.catchSides(a, b);
	prostokat3.getSides();
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	
	cout<<"\nCzwarty prostok¹t: "<<endl;
	Rectangle prostokat4;
	prostokat4= copyRectangle(prostokat1);
	prostokat4.getSides();
	prostokat4.catchSides(a, b);
	prostokat4.getSides();
	cout<<"a: "<<a<<"\nb: "<<b<<endl;
	
}
