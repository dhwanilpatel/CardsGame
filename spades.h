/*
 * spades.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef SPADES_H_
#define SPADES_H_
#include "cards.h"
class spades:public cards {
public:
	spades(int);
	int getno();
	virtual ~spades();
private:
	int no;
};

#endif /* SPADES_H_ */
