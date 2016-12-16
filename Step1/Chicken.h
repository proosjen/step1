/**
 * \file Chicken.h
 *
 * \author Jenn Proos
 *
 * Declaration of the CChicken class.
 */

#pragma once

#include <string>
#include "Animal.h"


/** 
* Class that describes a chicken.
 */
class CChicken : public CAnimal
{
public:
	CChicken();
	virtual ~CChicken();

	void ObtainChickenInformation();
	void DisplayAnimal();
	int NumLegs();

private:
	/// The chicken's ID
	std::string mId;

	/// Number of legs on a chicken
	const static int mNumChickenLegs = 2;
};

