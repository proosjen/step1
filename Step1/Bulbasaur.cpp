/**
 * \file Bulbasaur.cpp
 *
 * \author Jenn Proos
 */

#include "stdafx.h"
#include <iostream>
#include "Bulbasaur.h"

using namespace std;


/**
 * Bulbasaur object constructor.
 */
CBulbasaur::CBulbasaur()
{
}

/**
 * Bulbasaur object constructor.
 */
CBulbasaur::~CBulbasaur()
{
}

/**
 * Obtain a Bulbasaur description from the user.
 */
void CBulbasaur::ObtainBulbasaurInformation()
{
	cout << endl;
	cout << "Input information about the Bulbasaur" << endl;

	// Obtain the name
	cout << "Name: ";
	cin >> mName;

	// Obtain the weight
	cout << "Weight: ";
	cin >> mWeight;

	// Obtain the number of candies eaten
	cout << "Candies eaten: ";
	cin >> mCandies;

	// Obtain the Bulbasaur's best skill using a menu.
	bool valid = false;
	while (!valid)
	{
		cout << "Choose the Bulbasaur's best skill" << endl;
		cout << "1: Tackle" << endl;
		cout << "2: Seed Bomb" << endl;
		cout << "Enter the selection and return: ";
		int option;
		cin >> option;
		if (!cin)
		{
			// We have an error. Clear the input and try again.
			cin.clear();
			cin.ignore();
			continue;
		}

		switch (option)
		{
		case 1:
			mSkill = Tackle;
			valid = true;
			break;

		case 2:
			mSkill = SeedBomb;
			valid = true;
			break;
		}
	}
}

/**
 * Display information about this Bulbasaur.
 */
void CBulbasaur::DisplayAnimal()
{
	cout << "Bulbasaur: " << mName << endl;
	cout << "Weight: " << mWeight << " kilograms" << endl;
	cout << "Candies eaten: " << mCandies << endl;
	cout << "Best skill: ";
	switch (mSkill)
	{
		case Tackle:
			cout << "Tackle" << endl;
			break;
		
		case SeedBomb:
			cout << "Seed Bomb" << endl;
			break;
	}
}


/**
 * 
 * \returns number of legs on a Bulbasaur
 */
int CBulbasaur::NumLegs()
{
	return mNumBulbasaurLegs;
}