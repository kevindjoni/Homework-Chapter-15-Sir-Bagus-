#include <iostream>
#include <string>
using namespace std;

class Time
{
	protected:
		int hour;
		int min;
		int sec;
	public:
		// Default constructor
		Time()
			{ hour = 0; min = 0; sec = 0; }

		// Constructor
		Time(int h, int m, int s)
			{ hour = h; min = m; sec = s; }

		// Accessor functions
		int getHour() const
			{ return hour; }

		int getMin() const
			{ return min; }

		int getSec() const
			{ return sec; }
};

class MilTime : public Time
{
	int milHours;
	int milSeconds;
	
	public:
		MilTime(int milHours, int milSeconds)
		{
			if(milHours > 2359)
			{
				cout << "Invalid Input";
				exit(0);
			} 
			else
			{
				this -> milHours = milHours;
			}
			
			if(milSeconds > 59 && milSeconds < 0)
			{
				cout << "Invalid Input";
				exit(0);
			}
			else
			{
				this -> milSeconds = milSeconds;
			}
			hour = this -> milHours / 100;
			min = this -> milHours % 100;
			sec = this -> milSeconds; 
		}
		
		void setTime(int hours, int seconds)
		{
			this -> milHours = hours;
			this -> milSeconds = seconds;
		}
		
		void printStdTime()
		{
			string AmPm;
			
			if(hour > 12)
			{
				hour = hour - 12;
				AmPm = "pm";
			}
			else
			{
				AmPm = "am";
			}
			cout << "Now shows " << hour << "." << min << AmPm << " and " << sec << " seconds" << endl;
		}
		
		void printMilTime()
		{
			int milHourVer = this -> milHours / 100;
			cout << "Now shows " << milHourVer << "." << min << " and " << sec << "seconds" << endl;
		}
		
		string getHours()
		{
			int milHourVer = this -> milHours / 100;
			string output1 = to_string(milHourVer) + "." + to_string(min) + " and " + to_string(sec) + " seconds";
			cout << endl;
			return output1;
		}
		
		string getStdHour()
		{
			string AmPm;
			
			if(hour > 12)
			{
				hour = hour - 12;
				AmPm = "pm";
			}
			else
			{
				AmPm = "am";
			}
			
			string output1 = to_string(hour) + "." + to_string(min) + AmPm + " and " + to_string(sec) + " seconds";
			cout << endl;
			return output1;
		}
};

int main()
{
	MilTime time(0400, 15);
	time.printStdTime();
	time.printMilTime();
	cout << time.getHours();
	cout << time.getStdHour();
	
	return 0;
}
