#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	string number;
	string date;
	
	public:
	Employee(string name, string number, string date)
	{
		this -> name = name;
		this -> number = number;
		this -> date = date;
	}
	
	void setName(string name)
	{
		this -> name = name;
	}
	
	string getName()
	{
		return name;
	}
	
	void setNumber(string number)
	{
		this -> number = number;
	}
	
	string getNumber()
	{
		return number;
	}
	
	void setDate(string date)
	{
		this -> date = date;
	}
	
	string getDate()
	{
		return date;
	}
};

class ProductionWorker : public Employee
{
	int shift;
	double rate;
	
	public:
		ProductionWorker(string name, string number, string date) : Employee (name, number, date)
		{
		}
		
		void setShift(int shift)
		{
			this -> shift = shift;
		}
		
		void setRate(double rate)
		{
			this -> rate = rate;
		}
		
		int getShift()
		{
			return shift;
		}
		
		double getRate()
		{
			return rate;
		}
};

int main()
{
	int option;
	
	ProductionWorker ProductionWorker("Erwin Rommel", "12345", "April 30th");
	cout << "Name: " << ProductionWorker.getName() << endl << "Number: " << ProductionWorker.getNumber() << endl << "Hire Date: " << ProductionWorker.getDate();
	
	ProductionWorker.setRate(500);
	cout << endl << "Pay Rate: $" << ProductionWorker.getRate();
	
	cout << endl << "Enter 1 for Day Shift & 2 for Night Shift" << endl;
	cin >> option;
	
	if(option == 1)
	{
		cout << "Day Shift";
	}
	else if(option == 2)
	{
		cout << "Night Shift";
	}
	else
	{
		cout << "Invalid Input" << endl << endl;
		main();
	}
	
	return 0;
}
