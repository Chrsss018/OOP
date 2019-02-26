#include "CHerbivorousAnimal.h"

CHerbivorousAnimal::CHerbivorousAnimal()
{
}

CHerbivorousAnimal::CHerbivorousAnimal(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal): CAnimal(name, accession_date, weight, preferred_food, quantity_of_daily_meal)
{
}

CHerbivorousAnimal::CHerbivorousAnimal(const CHerbivorousAnimal& animalierbivor) : CAnimal(animalierbivor)
{
}

CHerbivorousAnimal::~CHerbivorousAnimal()
{
}
