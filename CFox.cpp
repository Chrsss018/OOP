#include "CFox.h"



CFox::CFox()
{
	m_temp_max = 0;
	m_type = 0;
}

CFox::CFox(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal, float temp_max, const bool type) : CHerbivorousAnimal(name, accession_date, weight, preferred_food, quantity_of_daily_meal)
{
	m_temp_max = temp_max;
	m_type = type;
}

CFox::CFox(const CFox& fox) : CHerbivorousAnimal(fox)
{
	m_temp_max = fox.m_temp_max;
	m_type = fox.m_type;
}


CFox::~CFox()
{
}
