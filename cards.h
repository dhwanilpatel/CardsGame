/*
 * cards.h
 *
 *  Created on: 14-Jul-2014
 *      Author: Dhwanil
 */

#ifndef CARDS_H_
#define CARDS_H_
#include <string>
using std::string;
class cards{
public:
	cards(int,string);
	int getno();
	string getcolor();
private:
	int no;
	string color;
};




#endif /* CARDS_H_ */
