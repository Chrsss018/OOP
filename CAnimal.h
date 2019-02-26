#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;
class CAnimal
{
protected:

	

public:
	CAnimal();
	CAnimal(const string& name, const string& accession_date, float weight, const string& preferred_food, float quantity_of_daily_meal);
	CAnimal(const CAnimal &);
	~CAnimal();


	virtual void show_particularities() {} 
	void show_traits()
	{
		cout << "name: " << m_name << endl;
		cout << "Accession date: " << m_accession_date << endl;
		cout << "weight: " << m_weight << endl;
		cout << "Preferred food: " << m_preferred_food << endl;
		cout << "Quantity of daily meal: " << m_quantity_of_daily_meal << endl;
		show_particularities(); 
	}

private:
	string m_name;
	string m_accession_date;
	float m_weight;
	string m_preferred_food;
	float m_quantity_of_daily_meal;
};

