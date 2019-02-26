#pragma once
#include "CHerbivorousAnimal.h"
class CFox :
	public CHerbivorousAnimal
{
public:
	CFox();
	CFox(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal, float temp_max,const bool type);
	CFox(const CFox &);
	~CFox();

	void show_particularities() override
	{
		cout << "Maximal temperature for survival: " << m_temp_max << endl;
		if (m_type == true) { cout << "Fox type: indigenous" << endl; }
		else { cout << "Fox type: polar. " << endl; }		
	}

private:
	float m_temp_max;
	bool m_type;
};

