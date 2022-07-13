#include <iostream>
#include <ctime>

// laba 1
using namespace std; 

struct Date{
	int day;
	int month;
	int year;
};
				struct Time{
					int minute;
					int hour;
					
				};
				
				void set(Date& date, int year, int month, int day) {      //date 
			if (year >= 1 && year <= 2100)
			date.year=year;
			if (month >= 1 && month <= 12)
			date.month=month;
			if (day >= 1 && day <= 31)
			date.day = day;
			}
									void set(Time& time, int hour, int minute) {		//time 
									if (hour>= 0 && hour <= 23)
									time.hour=hour;
									if (minute >= 0 && minute <= 59)
									time.minute=minute;
								}
									
									
				void print(){		//date 
			}
									void print()	//time 
									
									
				void read()	{		//date
				Date d1;
				cout << "type the day:" << endl; 
				cin >> d1.day;
				cout << "type the month:" << endl; 
				cin >> d1.month;
				cout << "type the year:" << endl; 
				cin >> d1.year;
			}
									void read()	{	//time
									 Time t1;
									 cout << "type the minute" << endl;
									 cin >> t1.minute; 
									 cout << "type the hour" << endl;
									 cin >> t1.hour; 
								}
int main(int argc, char** argv) {
	
	return 0;
}
