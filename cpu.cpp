/*
 * cpu.cpp
 *
 *  Created on: 15-Jul-2014
 *      Author: Dhwanil
 */

#include "player.h"
#include<iostream>
using namespace std;
cpu::cpu(cards* cpu1,cards* opp)
{
	// TODO Auto-generated constructor stub
	cpucard=cpu1;
	oppcard=opp;
	//cpu::totalcards=15;
	play1=new player(oppcard,this);
	sir=new cards(0,"spades");
}

cpu::~cpu() {
	// TODO Auto-generated destructor stub
}

void cpu::setsir(cards* s)
{
	sir=s;
}

void cpu::firstturn(){
	cards *move=new cards(0,"diamonds");
	for(int i=0;i<15;i++)
	{
		if(cpucard[i].getno()>move->getno())
			move=&cpucard[i];
	}
	cout<<"cpu move"<<move->getcolor()<<"  "<<move->getno()<<endl;
		//*move=nullptr;

	play1->secondturnplayer(move);

	delete move;

}

void cpu::secondturn(cards move){
	string color=move.getcolor();
	cards* min=new cards(15,color);
	cards* mex=new cards(0,color);

	check(min,mex,color);

	if(mex->getno()>move.getno())
	{
		cout<<"cpu move"<<mex->getcolor()<<"  "<<mex->getno()<<endl;
		//*mex=nullptr;
		turn=true;
	}
	else
		if((mex->getno()==0)&&(min->getno()==15))
		{
			cards* minsir=new cards(15,sir->getcolor());
			cards* mexsir=new cards(0,sir->getcolor());
			check(minsir,mexsir,sir->getcolor());

			cout<<"cpu move"<<minsir->getcolor()<<"  "<<minsir->getno()<<endl;
				//*minsir=nullptr;
				turn=true;
				delete minsir,mexsir;
		}
		else
		{
			cout<<"cpu move"<<min->getcolor()<<"  "<<min->getno()<<endl;
				//*min=nullptr;
				turn =false;
		}
	if(turn)
		firstturn();
	else
		play1->turnplayer();
	delete mex,min;
}

void cpu::check(cards*min,cards*mex,string color){

	for(int i=0;i<15;i++)
		{
			if(cpucard[i].getcolor()==color && cpucard[i].getno()<min->getno())
				min=&cpucard[i];

			if(cpucard[i].getcolor()==color && cpucard[i].getno()>min->getno())
				mex=&cpucard[i];
		}
}

void cpu::setplayer(player* p)
{
	play1=p;
}

