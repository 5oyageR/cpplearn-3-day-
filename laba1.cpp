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
									
									
				void read(Date& date)	{		//date
				cout << "type the day:" << endl; 
				int day;
				cin >> day;
				cout << "type the month:" << endl;
				int month; 
				cin >> month;
				cout << "type the year:" << endl; 
				int year;
				cin >> year;
			}
									void read(Time& time)	{	//time
									 cout << "type the minute" << endl;
									 int minute;
									 cin >> minute; 
									 cout << "type the hour" << endl;
									 int hour;
									 cin >> hour; 
								}
int main(int argc, char** argv) {
	
	return 0;
}
