#pragma once
#include "CHerbivorousAnimal.h"
class CDeer :
	public CHerbivorousAnimal
{
public:
	CDeer();
	CDeer(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal, float number_babies);
	CDeer(const CDeer &);
	~CDeer();


	void show_particularities() override
	{
		cout << "Number of babies: " << m_no_of_babies << endl;
	}

private:
	int m_no_of_babies;
};
