#include "Employee.h"
class Salariedemployee: public Employee
{
	private: 
		double salary;
	public:
		Salariedemployee();
		Salariedemployee(string name1, string ssn1, double salary1);
		void set_salary(double salary1);
		double get_salary() const;
		void print() ;
		
};
