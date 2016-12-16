/**
* \file Farm.h
* 
* \author Jenn Proos
*
* Class that describes a Farm.
*
* This class holds a collection of animals that make 
* up the inventory of a farm.
*/

#pragma once

#include <vector>
#include "Cow.h"
#include "Animal.h"


/**
* Class that describes a Farm.
*
* Holds a collection of animals that make up the farm
* inventory.
*/
class CFarm
{
public:
	CFarm();
	virtual ~CFarm();

	void AddAnimal(CAnimal *animal);
	void DisplayInventory();
	int NumLegs();

private:
	/// A list with the inventory of all animals on the farm
	std::vector<CAnimal *> mInventory;
};

