/*
 * player.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "player.h"
#include <iostream>
using namespace std;
player::player(cards* ca,cpu* cp) {
	// TODO Auto-generated constructor stub
	card=ca;
	//player::totalcard=15;
	c=cp;
	cout<<"player created";
	//c->setplayer(this);
}

cards* player::makesir()
{
	cout<<"choose sir from below cards"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<1<<endl;
		cout<<(i+1)<<" "<< card[i].getcolor()<<" "<<card[i].getno()<<endl;
	}

	int choice;
	cin>>choice;

	sir=new cards(0,card[choice].getcolor());
	return sir;
}

void player::turnplayer()
{
	cout<<"your turn please choose one card from below"<<endl;

	for(int i=0;i<totalcard;i++)
	{
		cout<<(i+1)<< card[i].getcolor()<<" "<<card[i].getno()<<endl;
	}

	int choice;
	cin>>choice;
	c->secondturn(card[choice]);
}

 void player::secondturnplayer(cards* move)
{
	cout<<"your turn please choose one card from below"<<endl;

		for(int i=0;i<totalcard;i++)
		{
			cout<<(i+1)<< card[i].getcolor()<<" "<<card[i].getno()<<endl;
		}

		int choice;
		cin>>choice;

	if((card[choice].getcolor()!=move->getcolor())&&(card[choice].getcolor()!=sir->getcolor()))
	{
		c->firstturn();
	}
	else
		if((card[choice].getcolor()==move->getcolor())&&(card[choice].getno()>move->getno()))
			{
				turnplayer();
			}
		else
			if((card[choice].getcolor()!=move->getcolor())&&(card[choice].getcolor()==sir->getcolor()))
			{
				turnplayer();
			}

}
player::~player() {
	// TODO Auto-generated destructor stub
}

