#include <iostream>
#include "Money.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool equal_globalfunction  (Money m1, Money m2);// GLOBAL FUNCTION
int main(int argc, char** argv) {
	Money money1; //constructor xoris orisma
	Money money2(145); // constructor me 1 orisma ta dollaria
	Money money3(1,127);// constructor me 2 orismata dollaria, cents
	Money money4;
	
	money1.input(); // arxikopoiisi apo to pliktrologio
    cout<<"\nMoney 1:"; 
	money1.output(); //emfanisi stin othoni
	cout<<endl;
	cout<<"\nMoney 2:"; 
	money2.output();
	cout<<endl;
	cout<<"\nMoney 3:"; 
	money3.output();
	cout<<"\n MEMBER FUNCTION ";
	if (money1.equal_memberfunction(money3))
	   cout<<"\nMoney 1 is equal to money 3 \n";
	   else
	   cout<<"\nMoney 1 is NOT equal to money 3 \n";
	cout<<endl;
		cout<<"\n FRIEND FUNCTION ";
	if (equal_friendfunction(money2, money3))
       cout<<"\n Money 2 is equal to money 3 \n";
	   else
	   cout<<"\n Money 2 is NOT equal to money 3 \n";	
	cout<<endl;
	cout<<"\n GLOBAL FUNCTION ";
	if (equal_globalfunction(money1,money2))
	   cout<<"\n Money 1 is equal to money 2 \n";
	   else
	   cout<<"\n Money 1 is NOT equal to money 2 \n";	
	cout<<"\n\n ADD FRIEND FUNCTION \n";
	    money4=add(money2,money3);
	    cout<<"Money 2 + Money 3 =";
	cout<<money2.get_value()<<"+"<<money3.get_value()<<"="<<money4.get_value();
	 /* money2.output();
	  cout<<"+";
	  money3.output();
	  cout<<"=";
	  money4.output();  */
	return 0;
}
bool equal_globalfunction(Money m1, Money m2)
{
	return (m1.get_value()==m2.get_value());
}
