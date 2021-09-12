#include <iostream>

using namespace std;

class Rectangle{
	public:
		float length;
		float width;
		float area;
		float circumference;
		
	void Area();
	void Circumference();
	void showArea();
	void showCircumference();
	void showAllData();
};

void Rectangle::Area(){
	area=length*width;
}

void Rectangle::Circumference(){
	circumference=(2*length)+(2*width);
}

void Rectangle::showArea(){
	cout<<"\nPole prostok¹ta: "<<area;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	Rectangle firstRec;
	cout<<"Podaj d³ugoœæ prostok¹ta: ";
	cin>>firstRec.length;
	cout<<"\nPodaj szerokoœæ prostok¹ta: ";
	cin>>firstRec.width;
	firstRec.Area();
	firstRec.showArea();
	return 0;
}
