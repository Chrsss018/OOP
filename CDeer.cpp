#include "CDeer.h"



CDeer::CDeer()
{
	m_no_of_babies = 0;
}

CDeer::CDeer(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal, float number_babies): CHerbivorousAnimal(name,accession_date,weight,preferred_food,quantity_of_daily_meal)
{
	m_no_of_babies = number_babies;
}

CDeer::CDeer(const CDeer& deer) : CHerbivorousAnimal(deer)
{
	m_no_of_babies = deer.m_no_of_babies;
}


CDeer::~CDeer()
{
}

