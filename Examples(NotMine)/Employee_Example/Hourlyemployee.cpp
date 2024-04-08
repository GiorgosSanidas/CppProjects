#include <iostream>
#include "Hourlyemployee.h"
using namespace std;
Hourlyemployee::Hourlyemployee():Employee(),hours(0), wage_rate(0)// klisi constructor vasikis klasis
{
// hours=0;
//wage_rate=0;	
}
Hourlyemployee::Hourlyemployee(string name1, string ssn1, double wage, double hours1)
:Employee(name1,ssn1)// klisi constructor vasikis klasis
{
 hours=hours1;
 wage_rate=wage;
 set_net_pay(hours*wage_rate);	// sinartisi set_net_pay poy klironomitai , den exo apeythias prosvasi sto net_pay einai private
}
void Hourlyemployee::set_hours(double hours)
{
	this->hours=hours;
}
void Hourlyemployee::set_wage_rate(double wage)
{
	wage_rate=wage;
	//this->wage_rate=wage;
}
double Hourlyemployee::get_hours () const
{
	return hours;
}
double Hourlyemployee::get_wage_rate() const
{
	return wage_rate;
}
void Hourlyemployee::print ()  // employtizo, kano overrride tin print poy klironomo
{
	Employee::print(); //kalo tin print tis vasikis klasis
	cout<<"Hours: "<<hours<<" Wage rate: "<<wage_rate<<endl;
	cout<<"Monthly payment: " << get_net_pay()<<endl;
	
}
