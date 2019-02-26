#include "CCarnivorousAnimal.h"



CCarnivorousAnimal::CCarnivorousAnimal()
{
}

CCarnivorousAnimal::CCarnivorousAnimal(const string & name, const string & accession_date, float weight, const string & preferred_food, float quantity_of_daily_meal) : CAnimal(name, accession_date, weight, preferred_food, quantity_of_daily_meal)
{
}

CCarnivorousAnimal::CCarnivorousAnimal(const CCarnivorousAnimal& animalcarnivor) : CAnimal(animalcarnivor)
{
}


CCarnivorousAnimal::~CCarnivorousAnimal()
{
}
