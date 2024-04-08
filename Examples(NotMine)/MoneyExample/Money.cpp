#include <iostream>
#include "Money.h"
using namespace std;
Money::Money():all_cents(0)
{
	//1os tropos
	//all_cents=0;
}
Money::Money(long dollars):all_cents(dollars*100)
{
	
}
Money::Money(long dollars, int cents)
{
	// dollars=12, cents=112;
	all_cents= dollars*100+cents;
}
double Money::get_value()
{
  return all_cents*0.01;	
}
void Money::input()
{
	int dollars, cents;
	cout<<"Give dollars:";
	cin>>dollars;
	cout<<"\nGive cents:";
	cin>>cents;
	all_cents=dollars*100+cents;
}
void Money::output()
{
	cout<<"\n $"<<all_cents/100<<"."<<all_cents%100;
}
bool Money::equal_memberfunction(Money m1)
{
	return (get_value()==m1.get_value());
//    return (this->get_value()== m1.get_value());
}
bool equal_friendfunction(Money m1, Money m2)	
{
     return	(m1.all_cents==m2.all_cents);
}
Money add (Money m1, Money m2)
{
	Money temp;
	temp.all_cents=m1.all_cents+m2.all_cents;
	return temp;
}

