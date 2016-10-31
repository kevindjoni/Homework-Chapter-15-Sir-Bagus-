#include <iostream>
#include <string>
using namespace std;

class PersonData
{
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

	public:
		PersonData()
		{
		}
		
		PersonData(string lastName, string firstName, string address, string city, string state, string zip, string phone)
		{
			this -> lastName = lastName;
			this -> firstName = firstName;
			this -> address = address;
			this -> city = city;
			this -> state = state;
			this -> zip = zip;
			this -> phone = phone;
		}
		
		void setLastName(string lastName)
		{
			this -> lastName = lastName;
		}
		void setFirstName(string firstName)
		{
			this -> firstName = firstName;
		}
		void setAddress(string address)
		{
			this -> address = address;
		}
		void setCity(string city)
		{
			this -> city = city;
		}
		void setState(string state)
		{
			this -> state = state;
		}
		void setZip(string zip)
		{
			this -> zip = zip;
		}
		void setPhone(string phone)
		{
			this -> phone = phone;
		}
		
		string getLastName() 
		{
			return lastName;
		}
		string getFirstName() 
		{
			return firstName;
		}
		string getAddress() 
		{
			return address;
		}
		string getCity() 
		{
			return city;
		}
		string getState() 
		{
			return state;
		}
		string getZip() 
		{
			return zip;
		}
		string getPhone() 
		{
			return phone;
		}
};

class CustomerData : public PersonData
{
	int customerNumber;
	bool mailingList;
		
	public:
		CustomerData(string lastName, string firstName, string address, string city, string state, string zip, string phone, int customerNumber, bool mailingList) : PersonData(lastName, firstName, address, city, state, zip, phone)
		{
			this -> customerNumber = customerNumber;
			this -> mailingList = mailingList; 
		}
		
		void setCustomerNumber(int customerNumber)
		{
			this -> customerNumber = customerNumber;
		}
		
		void setMailingList(bool mailinglist)
		{
			this -> mailingList = mailinglist;
		}
		
		int getCustomerNumber()
		{
			return customerNumber;
		}
		
		bool getMailingList() 
		{
			return mailingList;
		}
};

class PreferredCustomer : public CustomerData
{
	double purchaseAmount;
	double discount;
	
	public:
	PreferredCustomer() : public CustomerData()
	{	
	}
	
	PreferredCustomer(double amount)
	{
		this -> purchaseAmount = amount;
		
		if(amount >= 2000)
		{
			this -> discountLevel = 0.1;
		}
		else if (amount >= 1500)
		{
			this -> discountLevel = 0.07;
		}
		else if (amount >= 1000)
		{
			this -> discountLevel = 0.06;
		}
		else if (amount >= 500)
		{
			this -> discountLevel = 0.05;
		}
		else 
		{
			this -> discountLevel = 0;
		}
	}	
	
	PreferredCustomer(string lastName, string firstName, string address, string city, string state, string zip, string phone, int customerNumber, bool mailingList, double amount) : CustomerData(lastName, firstName, address, city, state, zip, phone, customerNumber, mailingList)
	{
		this->purchaseAmount = amount;
			if(amount >= 2000)
			{
				this->discountLevel = 0.1;
			}
			else if (amount >= 1500)
			{
				this->discountLevel = 0.07;
			}
			else if (amount >= 1000)
			{
				this->discountLevel = 0.06;
			}
			else if (amount >= 500)
			{
				this->discountLevel = 0.05;
			}
			else 
			{
				this->discountLevel = 0;	
			}
	}
	
	void setAmount(double amount)
		{
			this -> purchasesAmount = amount;
			
			if(amount >= 2000)
			{
				this -> discountLevel = 0.1;
			}
			else if (amount >= 1500)
			{
				this -> discountLevel = 0.07;
			}
			else if (amount >= 1000)
			{
				this -> discountLevel = 0.06;
			}
			else if (amount >= 500)
			{
				this -> discountLevel = 0.05;
			}
			else 
			{
				this -> discountLevel = 0;
			}
		}
		
		double getAmount()
		{ 
			return this -> purchaseAmount;	
		}
		
		double getDisc()
		{
			return this -> discount;	
		}
};

int main()
{
	string inputLastName;
	string inputFirstName;
	string inputAddress;
	string inputCity;
	string inputState;
	string inputZip;
	string inputPhone;
	
	cout << "Your Personal Data" << endl;
	cout << "------------------" << endl;
	
	cout << "Last Name: ";
	cin >> inputLastName;
	cout << "First Name: ";
	cin >> inputFirstName;
	cout << "Address: ";
	cin >> inputAddress;
	cout << "City: ";
	cin >> inputCity;
	cout << "State: ";
	cin >> inputState;
	cout << "Zip: ";
	cin >> inputZip;
	cout << "Phone: ";
	cin >> inputPhone;
	
	PreferredCustomer Data(inputLastName, inputFirstName, inputAddress, inputCity, inputState, inputZip, inputPhone, inputMailing, input);
	
	cout << "Your Personal Data" << endl;
	cout << "------------------" << endl;
	cout << "Last Name: " << customer.getLastName() << endl;
	cout << "First Name: " << customer.getFirstName() << endl;
	cout << "Address: " << customer.getAddress() << endl;
	cout << "City: " << customer.getCity() << endl;
	cout << "State: " << customer.getState() << endl;
	cout << "Zip: " << customer.getZip() << endl;
	cout << "Phone: " << customer.getPhone() << endl;
	cout << "Mailing status: " << customer.getMailingList() << endl;
	cout << "Customer Number: " << customer.getCustomerNumber();
	
	return 0;
}
