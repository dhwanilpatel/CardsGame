/*
 * main.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include<iostream>
using namespace std;
#include<cstdlib>
#include<time.h>
#include "cards.h"
#include "heart.h"
#include "clubs.h"
#include "diamond.h"
#include "spades.h"
#include "player.h"
#include"cpu.h"
void suffle();
cards* pack[30];
int main()
{
//cards** pack=new cards[30];
cards* playercard[15];
for(int i=0;i<6;i++)
{
	pack[i]=new heart(i+7);
	pack[i+13]=new spades(i+7);
	//(pack+i*sizeof(cards))=new heart(i+7);
	//(pack+i*sizeof(cards)+13)=new spades(i+7);
}

for(int i=0;i<6;i++)
{
	pack[i+7]=new clubs(i+8);
	pack[i+20]=new diamond(i+8);
	//(pack+i*sizeof(cards)+7)=new clubs(i+8);
	//(pack+i*sizeof(cards)+20)=new diamond(i+8);
}
pack[26]=new heart(14);
pack[27]=new diamond(14);
pack[28]=new clubs(14);
pack[29]=new spades(14);


//(pack+26*sizeof(cards))=new heart(14);
//(pack+27*sizeof(cards))=new diamond(14);
//(pack+28*sizeof(cards))=new spades(14);
//(pack+29*sizeof(cards))=new clubs(14);

suffle();
for(int i=0;i<15;i++)
{
	playercard[i]=new cards(pack[i]->getno(),pack[i]->getcolor());
}
cpu cpu2(pack[14],playercard[0]);
cout<<"cpu created"<<endl;
player play1(playercard[0],&cpu2);
cout<<"player created"<<endl;
cpu2.setplayer(&play1);
cout<<"player created in cpu"<<endl;
cpu2.setsir(play1.makesir());

play1.turnplayer();

}

void suffle()
{
srand (time(NULL));
for(int i=0;i<30;i++)
{
	int random=rand()%30;
	cards* tmp=pack[0];
	pack[0]=pack[random];
	pack[random]=tmp;
}
}
