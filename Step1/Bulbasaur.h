/**
 * \file Bulbasaur.h
 *
 * \author Jenn Proos
 *
 * Class that describes a Bulbasaur.
 */

#pragma once

#include <string>
#include "Animal.h"


/**
 * Describes a Bulbasaur.
 */
class CBulbasaur : public CAnimal
{
public:
	CBulbasaur();
	virtual ~CBulbasaur();

	/// The different skills the Bulbasaur has
	enum Type {Tackle, SeedBomb};

	void ObtainBulbasaurInformation();
	void DisplayAnimal();
	int NumLegs();

private:
	/// The Bulbasaur's name
	std::string mName;

	/// The Bulbasaur's weight
	double mWeight = 0;

	/// Number of candies the Bulbasaur has eaten
	int mCandies = 0;

	/// The Bulbasaur's best skill
	Type mSkill = Tackle;

	/// Number of legs on a Bulbasaur
	const static int mNumBulbasaurLegs = 4;
};

