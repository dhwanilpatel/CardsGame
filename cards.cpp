/*
 * cards.cpp
 *
 *  Created on: 14-Jul-2014
 *      Author: Dhwanil
 */
#include "cards.h"

cards::cards(int n,string c)
{
	no=n;
	color=c;
}

string cards::getcolor(){
	return color;
}
int cards::getno(){
	return no;
}



