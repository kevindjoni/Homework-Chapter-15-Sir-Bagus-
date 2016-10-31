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

class ShiftSupervisor : public Employee
{
	double salary;
	double bonus;
	
	public:
		ShiftSupervisor(string name, string number, string date) : Employee (name, number, date)
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
		double getSalary()
		{
			return salary;
		}
		double getBonus()
		{
			return bonus;
		}
};

int main()
{
	ShiftSupervisor ShiftSupervisor("Erwin Rommel", "12345", "April 30th");
	cout << "Name: " << ShiftSupervisor.getName() << endl << "Number: " << ShiftSupervisor.getNumber() << endl << "Hire Date: " << ShiftSupervisor.getDate();
	
	ShiftSupervisor.setSalary(500);
	ShiftSupervisor.setBonus(50);
	
	cout << endl << "Salary: $" << ShiftSupervisor.getSalary() << endl;
	cout << "Bonus: $" << ShiftSupervisor.getBonus();
	
	double total = ShiftSupervisor.getSalary() + ShiftSupervisor.getBonus();
	
	cout << endl << "Total: $" << total;
	
	return 0;
}
