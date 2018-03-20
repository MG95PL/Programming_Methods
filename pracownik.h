#pragma once
#include "osoba.h"

class Tworker : public Tperson
{
	std::string job;
	double salary;


public:

	Tworker() : job("brak"), salary(0.0) {};
	Tworker(const std::string& nazwi, const int& licz, std::string stan, double pl) : Tperson(nazwi, licz), job(stan), salary(pl) {}

	const std::string& stanowisko() const { return job; }
	const double& placa() const { return salary; }

	void pokaz() const;
	virtual void pokaz2() const;


};

