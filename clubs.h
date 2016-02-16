/*
 * clubs.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef CLUBS_H_
#define CLUBS_H_
#include "cards.h"
class clubs:public cards
{
public:
	clubs(int);
	int getno();
	virtual ~clubs();
private:
	int no;
};

#endif /* CLUBS_H_ */
