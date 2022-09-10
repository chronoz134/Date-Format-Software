//CIS-265-098WB
//Prof.Wang
//Zechariah Delos Santos
//Due Date:4/25/22
//Assignment 13
#include <iostream>
#include <string>

using namespace std;

class Date{

	public:
		int day;
		int month;
		int year;
		string months[12];

 		Date(){
			day = 0;
			month = 0;
			year = 0;
			months[0] = "January";
			months[1] = "February";
			months[2] = "March";
			months[3] = "April";
			months[4] = "May";
			months[5] = "June";
			months[6] = "July";
			months[7] = "August";
			months[8] = "September";
			months[9] = "October";
			months[10] = "November";
			months[11] = "December";
			
		};
		void getMonth(){
			cout << "Please enter a integer for the month from 1-12" << endl;
			cin >> month;
			while(month < 1 || month > 12){
				cout << "Please enter a valid month integer from 1-12" << endl;
				cin >> month;
				}
			}
		void getYear(){
			cout <<"Please enter a Year (1800-2050)" << endl;\
			cin >> year;
			while(year < 1800 || year > 2050){
				cout <<"Please enter a year in the prescribed range (1800-2050)" << endl;
				cin>> year;
			}
		}
		void getDay(){	
			switch(month){
				case 1:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 2:
					cout << "Please enter a day from 1-28" << endl;
					cin >> day;
					while(day <1 || day > 28){
						cout << "Please enter a valid integer from the range 1-28" << endl;
						cin >> day;
					}
					break;
				
				case 3:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 4:
					cout << "Please enter a day from 1-30" << endl;
					cin >> day;
					while(day <1 || day > 30){
						cout << "Please enter a valid integer from the range 1-30" << endl;
						cin >> day;
					}
					break;
				
				case 5:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 6:
					cout << "Please enter a day from 1-30" << endl;
					cin >> day;
					while(day <1 || day > 30){
						cout << "Please enter a valid integer from the range 1-30" << endl;
						cin >> day;
					}
					break;
				
				case 7:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 8:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 9:
					cout << "Please enter a day from 1-30" << endl;
					cin >> day;
					while(day <1 || day > 30){
						cout << "Please enter a valid integer from the range 1-30" << endl;
						cin >> day;
					}
					break;
				
				case 10:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				
				case 11:
					cout << "Please enter a day from 1-30" << endl;
					cin >> day;
					while(day <1 || day > 30){
						cout << "Please enter a valid integer from the range 1-30" << endl;
						cin >> day;
					}
					break;
				
				case 12:
					cout << "Please enter a day from 1-31" << endl;
					cin >> day;
					while(day <1 || day > 31){
						cout << "Please enter a valid integer from the range 1-31" << endl;
						cin >> day;
					}
					break;
				}
		}	
		void formatOne(int month, int day, int year){
			cout << month <<"/" << day << "/" << year << endl;
		}
		void formatTwo(int month, int day, int year){	
			cout << months[month] << " " << day <<"," << year << endl;
		}
		void formatThree(int month, int day, int year){
			cout << day <<" " << months[month] << " " << year << endl;
		}

};

int main() {
	int decision;
	Date DateFormat;
	cout << "This is a date format conversion program" << endl;
	cout << "Possible formats are as listed" << endl;
	cout << "1) \"XX/XX/XXXX\" i.e 12/31/2022" << endl;
	cout << "2) \"Month Day, Year\" i.e December 25, 2022" << endl;
	cout << "3) \"Day Month Year \" i.e 25 December 2014" << endl;
	cout << "Pleese enter a number from 1-3 to select the format" << endl;
	cin >> decision;
	while(decision <1 || decision > 3){
		cout << "Please enter a valid integer from the range of 1-3" << endl;
		cin >> decision;
	}

	switch(decision){
		case 1:
			DateFormat.getMonth();
			DateFormat.getDay();
			DateFormat.getYear();
			cout << "Here is your requested format" << endl;
			DateFormat.formatOne(DateFormat.month, DateFormat.day, DateFormat.year);
		break;
		case 2:
			DateFormat.getMonth();
			DateFormat.getDay();
			DateFormat.getYear();
			cout << "Here is your requested format" << endl;
			DateFormat.formatTwo(DateFormat.month, DateFormat.day, DateFormat.year);
		break;
		case 3:
			DateFormat.getMonth();
			DateFormat.getDay();
			DateFormat.getYear();
			cout << "Here is your requested format" << endl;
			DateFormat.formatThree(DateFormat.month, DateFormat.day, DateFormat.year);
		break;
	}
}