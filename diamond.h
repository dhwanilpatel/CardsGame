/*
 * diamond.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef DIAMOND_H_
#define DIAMOND_H_
#include "cards.h"
class diamond:public cards {
public:
	diamond(int);
	virtual ~diamond();
	int getno();
private:
	int no;
};

#endif /* DIAMOND_H_ */
