/**
 * \file Cow.h
 *
 * \author Jenn Proos
 *
 * Class that describes a Cow.
 * 
 */

#pragma once

#include <string>
#include "Animal.h"


/**
 * Describes a single Cow.
 */
class CCow : public CAnimal
{
public:
	CCow();
	virtual ~CCow();

	/// The types of cow we can have on our farm
	enum Type {Bull, BeefCow, MilkCow};

	void ObtainCowInformation();
	void DisplayAnimal();
	int NumLegs();

private:
	/// The cow's name
	std::string mName;

	/// The type of code: Bull, BeefCow, or MilkCow
	Type mType = MilkCow;

	/// The milk production for a cow in gallons per day
	double mMilkProduction = 0;

	/// Number of legs on a cow
	const static int mNumCowLegs = 4;
};

