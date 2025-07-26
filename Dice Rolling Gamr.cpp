// Dice Rolling Gamr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"cstdlib"
#include"ctime"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	int totalrolls,rolldie1,rolldie2,count=0;
	cout<<"How many times would you like to roll the pair of dice?"<<endl;
	cin>>totalrolls;
	for(int i=1;i<=totalrolls;i++)
	{
	rolldie1=rand()% 6+1;
	rolldie2=rand()% 6+1;
	count++;
	cout<<"Roll"<<i<<": Die 1= "<<rolldie1<<", Die 2="<<rolldie2<<endl;
	}
	cout<<"You rolled the dice "<<count<<" times"<<endl;
	system("pause");
	return 0;
}

