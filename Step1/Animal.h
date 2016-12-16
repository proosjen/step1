/**
 * \file Animal.h
 *
 * \author Jenn Proos
 *
 * Class that describes an animal.
 */

#pragma once

/**
 * Class that describes an animal.
 */
class CAnimal
{
public:
	CAnimal();
	virtual ~CAnimal();

	virtual void DisplayAnimal();
	virtual int NumLegs();
};

