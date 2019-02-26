#pragma once
#include "CAnimal.h"
class CHerbivorousAnimal :
	public CAnimal
{
public:
	CHerbivorousAnimal();
	CHerbivorousAnimal(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal);
	CHerbivorousAnimal(const CHerbivorousAnimal &);
	~CHerbivorousAnimal();
};

