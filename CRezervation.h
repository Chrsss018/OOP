#pragma once
#include "CAnimal.h"
#include "CCarnivorousAnimal.h"
#include "CHerbivorousAnimal.h"
#include "CDeer.h"
#include "CBear.h"
#include "CLion.h"
#include "CFox.h"

class CRezervation
{
public:

	CRezervation() {};
	~CRezervation();
	
	void Add(CAnimal* animal);


	friend ostream& operator<<(ostream& str, CRezervation const& rezervation);

private:
	list<CAnimal*> animals;
};

