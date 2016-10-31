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

class TeamLeader : public Employee
{
	double salary;
	double bonus;
	int rHour;
	int aHour;
	
	public:
		TeamLeader(string name, string number, string date) : Employee (name, number, date)
		{
		}
		
		void setSalary(double salary)
		{
			this -> salary = salary;
		}
		void setBonus(double bonus)
		{
			this -> bonus = bonus;
		}
		void setRHour(int rHour)
		{
			this -> rHour = rHour;
		}
		void setAHour(int aHour)
		{
			this -> aHour = aHour;
		}
		double getSalary()
		{
			return salary;
		}
		double getBonus()
		{
			return bonus;
		}
		int getRHour()
		{
			return rHour;
		}
		int getAHour()
		{
			return aHour;
		}
};

int main()
{
	int input;
	
	TeamLeader TeamLeader("Erwin Rommel", "12345", "April 30th");
	cout << "Name: " << TeamLeader.getName() << endl << "Number: " << TeamLeader.getNumber() << endl << "Hire Date: " << TeamLeader.getDate();
	
	TeamLeader.setSalary(500);
	TeamLeader.setBonus(50);
	TeamLeader.setRHour(15);
	
	cout << endl << "Salary: $" << TeamLeader.getSalary() << endl;
	cout << "Bonus: $" << TeamLeader.getBonus();
	
	double total = TeamLeader.getSalary() + TeamLeader.getBonus();
	
	cout << endl << "Total: $" << total << endl;
	
	cout << "Required Hours: " << TeamLeader.getRHour() << endl;
	cout << "Attended Hours: ";
	cin >> input;
	
	if(input < 15)
	{
		cout << "You did not meet the required working hour.";
	}
	else if(input >= 15)
	{
		cout << "You meet the required working hour.";
	}
	
	return 0;
}
