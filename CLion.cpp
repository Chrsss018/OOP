#include "CLion.h"



CLion::CLion()
{
	m_temp_min = 0;
	 m_country_of_origin = "";
}

CLion::CLion(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal, float temp_min, const string & country_of_origin) : CCarnivorousAnimal(name, accession_date, weight, preferred_food, quantity_of_daily_meal)
{
	m_temp_min = temp_min;
	 m_country_of_origin = country_of_origin;
}

CLion::CLion(const CLion& lion) : CCarnivorousAnimal(lion)
{
	m_temp_min = lion.m_temp_min;
	 m_country_of_origin = lion. m_country_of_origin;
}


CLion::~CLion()
{
}
