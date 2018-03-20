#pragma once
#include <iostream>
#include <string>

class Tperson
{
	std::string name;
	int age;

public:
	Tperson() : name("none"), age(0) {}
	Tperson(const std::string& name_, const int& age_) : name(name_), age(age_) {}
	~Tperson() {};

	void pokaz() const;
	virtual void pokaz2() const;

	const std::string& nazwisko() const { return name; }
	const int& liczba_lat() const { return age; }
	
};

