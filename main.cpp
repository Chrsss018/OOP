/*
* @file main.cpp
*
* @author © Cocîrlã Cristian-Gabriel
*
* @creation date 08/12/2018
*/

#include <iostream>
#include "CRezervation.h"

int main()
{

	CRezervation rezervation;

	string name;
	string accession_date;
	float weight = 0;
	string preferred_food;
	float quantity_of_daily_meal = 0;

	int number_babies = 0; // deer
	string hibernation; // bear
	float temp_min = 0; // lion
	string country_of_origin; // lion
	float temp_max = 0; // fox
	int tempo = 0; // fox
	bool type = false; // fox ; 0 - indigenous , 1 - polar



	int menu;
	while (true)
	{
		system("CLS");
		cout << "1 - Add a deer. " << endl;
		cout << "2 - Add a bear. " << endl;
		cout << "3 - Add a lion. " << endl;
		cout << "4 - Add a fox. " << endl;
		cout << "5 - List of animals. " << endl;
		cout << "6 - Exit. " << endl;
		cin >> menu;
		switch (menu)
		{
			case 1:
			{
				cout << endl << "name: ";
				cin >> name;
				cout << endl << "Accession date: ";
				cin >> accession_date;
				cout << endl << "weight: ";
				cin >> weight;
				cout << endl << "Preferred food: ";
				cin >> preferred_food;
				cout << endl << "Quantity of daily meal: ";
				cin >> quantity_of_daily_meal;
				cout << endl << "Number of babies: ";
				cin >> number_babies;

				CDeer *tempDEER;
				tempDEER = new CDeer(name, accession_date, weight, preferred_food, quantity_of_daily_meal, number_babies);
				rezervation.Add(tempDEER); // new si delete in acelasi fisier de preferat
				break;
			}
			case 2:
			{
				cout << endl << "name: ";
				cin >> name;
				cout << endl << "Accession date: ";
				cin >> accession_date;
				cout << endl << "weight: ";
				cin >> weight;
				cout << endl << "Preferred food: ";
				cin >> preferred_food;
				cout << endl << "Quantity of daily meal: ";
				cin >> quantity_of_daily_meal;

				cout << endl << "Period of hibernation: ";
				cin >> hibernation;

				CBear *tempBEAR = nullptr;
				tempBEAR = new CBear(name, accession_date, weight, preferred_food, quantity_of_daily_meal, hibernation);
				rezervation.Add(tempBEAR);

				break;
			}
			case 3:
			{
				cout << endl << "name: ";
				cin >> name;
				cout << endl << "Accession date: ";
				cin >> accession_date;
				cout << endl << "weight: ";
				cin >> weight;
				cout << endl << "Preferred food: ";
				cin >> preferred_food;
				cout << endl << "Quantity of daily meal: ";
				cin >> quantity_of_daily_meal;

				cout << endl << "Minimal temperature for survival: ";
				cin >> temp_min;
				cout << endl << "Country of origin: ";
				cin >> country_of_origin;

				CLion *tempLION = nullptr;
				tempLION = new CLion(name, accession_date, weight, preferred_food, quantity_of_daily_meal, temp_min, country_of_origin);
				rezervation.Add(tempLION);
				break;
			}
			case 4:
			{
				cout << endl << "name: ";
				cin >> name;
				cout << endl << "Accession date: ";
				cin >> accession_date;
				cout << endl << "weight: ";
				cin >> weight;
				cout << endl << "Preferred food: ";
				cin >> preferred_food;
				cout << endl << "Quantity of daily meal: ";
				cin >> quantity_of_daily_meal;

				cout << endl << "Maximal temperature for survival: ";
				cin >> temp_max;
				cout << endl << "Is it indigenous or polar? (1 - indigenous / 2 - polar)";
				cin >> tempo;
				if (tempo == 2)
				{
					type = true;
				}

				CFox *tempFOX = nullptr;
				tempFOX = new CFox(name, accession_date, weight, preferred_food, quantity_of_daily_meal, temp_max, type);
				rezervation.Add(tempFOX);
				break;
			}
			case 5:
			{
				cout << rezervation;
				system("Pause");
				break;
			}
			case 6:
			{
				exit(1);
				break;
			}

		}
	}



	system("Pause");
	return 0;
}