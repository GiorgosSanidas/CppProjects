#include <iostream>
#include "DayofYear.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	DayofYear today(30,10);// constructor with parameters call
	DayofYear d1;////default construstor call (month=0, day=0;) 
	//d1.DayofYear(); WRONG
	int day1=3000;
	int month1=11;
	if(d1.checkDates(day1,month1))
	  {
	    d1.set(day1,month1);
	  }
	d1.output();
	
	return 0;
}
