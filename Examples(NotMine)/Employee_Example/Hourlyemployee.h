#include "Employee.h";
class Hourlyemployee: public Employee // dilosi klironomikotitas
{
	private:
		double hours;
		double wage_rate;
	public: Hourlyemployee();
	        Hourlyemployee(string name1, string ssn1, double wage, double hours1);
			void set_hours(double hours);
			void set_wage_rate(double wage);
			double get_hours () const;
			double get_wage_rate() const;
			void print () ;
};
