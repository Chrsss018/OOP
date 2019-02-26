#include "CAnimal.h"
#include "CDeer.h"


CAnimal::CAnimal()
{
	m_name = "";
	m_accession_date = "";
	m_weight = 0;
	m_preferred_food = "";
	m_quantity_of_daily_meal = 0;
}

CAnimal::CAnimal(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal)
{
	m_name = name;
	m_accession_date = accession_date;
	m_weight = weight;
	m_preferred_food = preferred_food;
	m_quantity_of_daily_meal = quantity_of_daily_meal;
}

CAnimal::CAnimal(const CAnimal &animal)
{
	m_name = animal.m_name;
	m_accession_date = animal.m_accession_date;
	m_weight = animal.m_weight;
	m_preferred_food = animal.m_preferred_food;
	m_quantity_of_daily_meal = animal.m_quantity_of_daily_meal;
}



CAnimal::~CAnimal()
{
}

