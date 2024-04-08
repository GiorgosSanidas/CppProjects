#include <string>
using namespace std;
#ifndef EMPLOYEE // entoli i opoia orizei tin Employee mono 1 fora
#define EMPLOYEE
class Employee // vasiki klasi
{
	private: 
		string name;
		string ssn;
		double net_pay;
	public:
		Employee();
		Employee(string n, string amka);
		string get_name() const;
		string get_ssn() const;
		double get_net_pay() const;
		void set_name(string n)	;
		void set_ssn (string amka);
		void set_net_pay(double pay);
		void print() const;
};
#endif
