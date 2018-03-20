#pragma once
#include "osoba.h"

class pracownik : public osoba
{
	std::string stanowisko_;
	double placa_;


public:

	pracownik() : stanowisko_("brak"), placa_(0.0) {};
	pracownik(const std::string& nazwi, const int& licz, std::string stan, double pl) : osoba(nazwi, licz), stanowisko_(stan), placa_(pl) {}

	const std::string& stanowisko() const { return stanowisko_; }
	const double& placa() const { return placa_; }

	void pokaz() const;
	virtual void pokaz2() const;

};

