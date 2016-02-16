/*
 * clubs.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "clubs.h"
#include "cards.h"
clubs::clubs(int n):cards(n,"clubs") {
	// TODO Auto-generated constructor stub
	no=n;
}
int clubs::getno(){
	return no;
}
clubs::~clubs() {
	// TODO Auto-generated destructor stub
}

