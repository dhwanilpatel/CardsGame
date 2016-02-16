/*
 * diamond.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "diamond.h"
#include "cards.h"
diamond::diamond(int n):cards(n,"diamond") {
	// TODO Auto-generated constructor stub

	no=n;
}
int diamond::getno(){
	return no;
}
diamond::~diamond() {
	// TODO Auto-generated destructor stub
}

