#include "stdafx.h"
#include "pracownik.h"


void Tworker::pokaz() const
{
	std::cout << "Pan/ni: " << nazwisko() << "\tWiek " << '\t' << liczba_lat() << '\t' << job << '\t' << salary << std::endl;
}

void Tworker::pokaz2() const
{
	std::cout << "Pan/ni: " << nazwisko() << "\tWiek " << '\t' << liczba_lat() << '\t' << job << '\t' << salary << std::endl;
}