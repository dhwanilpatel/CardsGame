/*
 * heart.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "heart.h"
#include "cards.h"
heart::heart(int n):cards(n,"heart")
{
	// TODO Auto-generated constructor stub
	no=n;
}
int heart::getno()
{
	return no;
}
heart::~heart() {
	// TODO Auto-generated destructor stub
}

