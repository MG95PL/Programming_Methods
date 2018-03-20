#include "stdafx.h"
#include "pracownik.h"


void pracownik::pokaz() const
{
	std::cout << "Pan/ni: " << nazwisko() << "\tWiek " << '\t' << liczba_lat() << '\t' << stanowisko_ << '\t' << placa_ << std::endl;
}

void pracownik::pokaz2() const
{
	std::cout << "Pan/ni: " << nazwisko() << "\tWiek " << '\t' << liczba_lat() << '\t' << stanowisko_ << '\t' << placa_ << std::endl;
}