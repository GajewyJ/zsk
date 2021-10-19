#include <iostream>

using namespace std;


class Dog{
	public:
		string name;
		string race;
		string color;
		string eyeColor;
		int height, lenght, weight;
		
		void sit();
		void layDown();
		void shake();
		void come();
		void getData();
		
		Dog(string name, string race, string color, string eyeColor, int heigh, int lenght, int weight);
};

void Dog::sit(){
	cout<<"\n*Pies siada*";
}
void Dog::layDown(){
	cout<<"\n*Pies k³adzie siê*";
}
void Dog::shake(){
	cout<<"\n*Pies macha ogonem*";
}
void Dog::come(){
	cout<<"\n*Pies przychodzi*";
}
Dog::Dog(string cName, string cRace, string cColor, string cEyeColor, int cHeight, int cLenght, int cWeight){
	name=cName;
	race=cRace;
	color=cColor;
	eyeColor=cEyeColor;
	height=cHeight;
	lenght=cLenght;
	weight=cWeight;
}
void Dog::getData(){
	cout<<"Imiê psa: "<<name<<"\nRasa psa: "<<race<<"\nKolor psa: "<<color<<"\nKolor oczu psa: "<<eyeColor<<"\nWielkoœæ psa:\n -Wysokoœæ: "<<
	height<<" Inches\n -D³ugoœæ: "<<lenght<<" Inches\n -Waga: "<<weight<<" Pounds";
}

main(int argc, char** argv){
	setlocale(LC_CTYPE, "polish");
	Dog rayne("Rayne", "Husky", "Szary, Bia³y, Czarny", "Niebieski i Br¹zowy", 18, 38, 30);
	rayne.getData();
	rayne.sit();
	rayne.layDown();
	rayne.shake();
	rayne.come();
	return 0;
}
