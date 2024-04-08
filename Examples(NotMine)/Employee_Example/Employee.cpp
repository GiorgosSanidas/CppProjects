#include <iostream>
#include "Employee.h"
using namespace std;
Employee::Employee():name(""), ssn (""), net_pay(0)
{
	
}
Employee::Employee(string n, string amka):name(n), ssn(amka),net_pay(0)
{
	
}
string Employee::get_name() const
{
  return name;	
}
string Employee::get_ssn() const
{
	return ssn;
}
double Employee::get_net_pay() const
{
	return net_pay;
}
void Employee::set_name(string n)
{
	name=n;
}	
void Employee::set_ssn (string amka)
{
	ssn=amka;
}
void Employee::set_net_pay(double pay)
{
    net_pay=pay;	
}
void Employee::print() const
{
	cout<<"Name:" << name<< " SSN:" <<ssn <<endl;
}
