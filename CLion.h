#pragma once
#include "CCarnivorousAnimal.h"
class CLion :
	public CCarnivorousAnimal
{
public:
	CLion();
	CLion(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal, float m_temp_min, const string& country_of_origin);
	CLion(const CLion &);
	~CLion();

	void show_particularities() override
	{
		cout << "Minimal temperature for survival: " << m_temp_min << endl;
		cout << "Country of origin: " <<  m_country_of_origin << endl;
	}

private:
	float m_temp_min;
	string  m_country_of_origin;
};

