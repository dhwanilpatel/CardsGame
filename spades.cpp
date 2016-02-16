/*
 * spades.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "spades.h"
#include "cards.h"
spades::spades(int n) :cards(n,"spades"){
	// TODO Auto-generated constructor stub

	no=n;

}

int spades::getno()
{
	return no;
}
spades::~spades() {
	// TODO Auto-generated destructor stub
}

