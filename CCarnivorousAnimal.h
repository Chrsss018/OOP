#pragma once
#include "CAnimal.h"
class CCarnivorousAnimal :
	public CAnimal
{
public:
	CCarnivorousAnimal();
	CCarnivorousAnimal(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal);
	CCarnivorousAnimal(const CCarnivorousAnimal &);
	virtual ~CCarnivorousAnimal();
};

