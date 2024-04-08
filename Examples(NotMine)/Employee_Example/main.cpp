#include <iostream>
#include "Employee.h"
#include "Hourlyemployee.h"
#include "Salariedemployee.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Employee emp1("Bibi","54645646");
	emp1.print();
    Hourlyemployee emp2("Pappas","4353453534", 25,80);
    emp2.print();
	Salariedemployee emp3 ("Terzakis","216656556",850.50);\
	emp3.print();
	return 0;
}
