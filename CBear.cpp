#include "CBear.h"



CBear::CBear()
{
	m_hibernation = "";
}

CBear::CBear(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal, const string & hibernation) : CCarnivorousAnimal(name, accession_date, weight, preferred_food, quantity_of_daily_meal)
{
	m_hibernation = hibernation;
}

CBear::CBear(const CBear& bear) : CCarnivorousAnimal(bear)
{
	m_hibernation = bear.m_hibernation;
}


CBear::~CBear()
{
}
