#pragma once
#include <iostream>
#include <string>

class osoba
{
	std::string nazwisko_;
	int liczba_lat_;

public:
	osoba() : nazwisko_("brak"), liczba_lat_(0) {}
	osoba(const std::string& naz, const int& lata) : nazwisko_(naz), liczba_lat_(lata) {}
	~osoba() {};

	void pokaz() const;
	virtual void pokaz2() const;

	const std::string& nazwisko() const { return nazwisko_; }
	const int& liczba_lat() const { return liczba_lat_; }
	
};

