/**
* \file Farm.cpp
*
* \author Jenn Proos
*/

#include "stdafx.h"
#include "Farm.h"
#include "Animal.h"


/**
* Constructor.
*/
CFarm::CFarm()
{
}


/**
* Destructor.
*/
CFarm::~CFarm()
{
	// Iterate over all of the animals, destroying
	// each one.
	for (auto animal : mInventory)
	{
		delete animal;
	}

	// And clear the list
	mInventory.clear();
}


/** Add an animal to the farm inventory.
 * 
 * \param animal An animal to add to the inventory
 */
void CFarm::AddAnimal(CAnimal *animal)
{
	mInventory.push_back(animal);
}


/**
 * Display the farm inventory.
 */
void CFarm::DisplayInventory()
{
	for (auto animal : mInventory)
	{
		animal->DisplayAnimal();
	}
}


/**
 * 
 * \returns total number of legs in the farm.
 */
int CFarm::NumLegs()
{
	int legsCount = 0;
	for (auto animal : mInventory)
	{
		legsCount += animal->NumLegs();
	}

	return legsCount;
}