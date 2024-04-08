#include<iostream>
#include "Salariedemployee.h"
using namespace std;
Salariedemployee::Salariedemployee():Employee()
{
	salary=0;
}
Salariedemployee::Salariedemployee(string name1, string ssn1, double salary1):
    Employee(name1,ssn1), salary(salary1)
{
//	net_pay=salary ; LATHOS net_pay einai private dedomeno
    set_net_pay(salary);
}
void Salariedemployee::set_salary(double salary1)
{
 salary=salary1;	
}
double Salariedemployee::get_salary() const
{
	return salary;
}
void Salariedemployee::print() 
{
	Employee::print();
	cout<<"Salary:"<<salary;
	cout<<"\nMonthly salary: "<<get_net_pay();
	
}
