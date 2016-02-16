/*
 * heart.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef HEART_H_
#define HEART_H_
#include "cards.h"
class heart :public cards{
public:
	heart(int );
	virtual ~heart();
	int getno();
private:
	int no;
};

#endif /* HEART_H_ */
