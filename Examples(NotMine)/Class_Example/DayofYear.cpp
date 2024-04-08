#include<iostream>
#include "DayofYear.h"
using namespace std;

void DayofYear::output()
{
  cout<<"Month:"<<month<<endl;
  cout<<"Day:"<<day<<endl;
}

void DayofYear::set(int day1, int month1)
{

    day=day1;
	month=month1;
}
DayofYear::DayofYear(int day1,int month1)
{
/*	if(checkDates(day1,month1)==1)
	{
	day=day1;
	month=month1;
    }
    else
    day=month=0;
    */
     if(((day1>0)&&(day1<=31))&&((month1>0)&&(month<=12)))	
     {
     	day=day1;
     	month=month1;
	 }
	 else
	    day=month=0;
    
}
DayofYear::DayofYear():day(1),month(1)
{
	//day=month=0;
}
int DayofYear::checkDates(int day1, int month1)
{
  if(((day1>0)&&(day1<=31))&&((month1>0)&&(month<=12)))	
    return 1;
    else
    return 0;
}
