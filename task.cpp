//ConsoleApplication17.cpp  Defines the entry point for the console application.


#include stdafx.h
#include osoba.h
#include pracownik.h

using namespace std;

int main() {


	cout  Hello  endl;

	//Under this line is a test code which, I`m not an owner. It has been created by Częstochowa Uniwersity of Technology research associates

	osoba os(Dolas, 26);
	os.pokaz();

	const osoba ob2(Kos, 15);
	ob2.pokaz();

	const pracownik pr1(Dyzma, 35, mistrz, 1250.0);
	cout  pr1.nazwisko()  't'  pr1.liczba_lat()  endl;
	cout  pr1.stanowisko()  't'  pr1.placa()  endl;

	pracownik pr2(pr1);
	pr2.pokaz();
	pracownik pr3(Kos, 45, kierownik, 2260.0);
	pr3.pokaz();

	pr3 = pr2;
	pr3.pokaz();


	osoba w = &os;
	w-pokaz();

	w = &pr2;
	w-pokaz();

	static_castpracownik(w)-pokaz();

	// end of test code 

	//Polymorphism
	
	osoba w = &os;
	w-pokaz2();

	w = &pr2;
	w-pokaz2();

	 
	system(pause);

	return 0;
}
