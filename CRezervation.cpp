#include "CRezervation.h"

CRezervation::~CRezervation()
{
	for (auto i = animals.begin(); i != animals.end(); i++)
	{
		delete *i;
	}
	animals.clear();
}

void CRezervation::Add(CAnimal * animal)
{
	animals.push_back(animal);
}

ostream & operator<<(ostream & str, CRezervation const & rezervation)
{
	{
		for (auto i = rezervation.animals.begin(); i != rezervation.animals.end(); i++) // should use auto i : rezervation.animals & cbegin to keep things unmodified
		{
			cout << "-----------------------------------------------" << endl;
			(*i)->show_traits();
			cout << "-----------------------------------------------" << endl;
		}
		return str;
	}
}
