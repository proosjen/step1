/**
 * \file Chicken.cpp
 *
 * \author Jenn Proos
 */


#include "stdafx.h"
#include <iostream>
#include "Chicken.h"

using namespace std;


/** Chicken object constructor.
 */
CChicken::CChicken()
{
}


/** Destructor.
 */
CChicken::~CChicken()
{
}

/** Obtain a chicken description from the user.
 */
void CChicken::ObtainChickenInformation()
{
	cout << endl;
	cout << "Input information about the chicken" << endl;

	// Obtain the ID. This is easy, since it's just a 
	// string.
	cout << "Id: ";
	cin >> mId;
}

/**
 * Display information about this chicken.
 */
void CChicken::DisplayAnimal()
{
	cout << "Chicken: " << mId << endl;
}


/**
 * 
 * \returns number of legs on a chicken
 */
int CChicken::NumLegs()
{
	return mNumChickenLegs;
}