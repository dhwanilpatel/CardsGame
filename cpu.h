/*
 * cpu.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef CPU_H_
#define CPU_H_
#include "cards.h"
#include "player.h"

class cpu;

class cpu {
public:
	cpu(cards*,cards*);
	virtual ~cpu();
	void secondturn(cards);
	void firstturn();
	void setsir(cards*);
	void check(cards*,cards*,string);
	void setplayer(player*);
	player *play1;
private:
	cards* cpucard;
	cards* oppcard;
	bool turn=false;
	cards* sir;
	//static int totalcards;

};

#endif /* CPU_H_ */
