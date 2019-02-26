#pragma once
#include "CCarnivorousAnimal.h"
class CBear :
	public CCarnivorousAnimal
{
public:
	CBear();
	CBear(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal, const string& hibernation);
	CBear(const CBear &);
	~CBear();

	void show_particularities() override
	{
		cout << "Period of hibernation: " << m_hibernation << endl;
	}


private:
	string m_hibernation;
};

