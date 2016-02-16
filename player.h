/*
 * player.h
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "cards.h"


class player;

#include "cpu.h"
class player {
public:
	player(cards*,cpu*);
	virtual ~player();
	void turnplayer();
	int totalcard;
	cards* makesir();
	void secondturnplayer(cards*);
private:
	cards* card;
	cards* sir;
	cpu* c;
};

#endif /* PLAYER_H_ */
