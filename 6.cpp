#include <iostream>
using namespace std;

class GradedActivity
{
	int grammarPoints;
	int spellingPoints;
	int correctLength;
	int contentPoints;

	public:
	GradedActivity(int grammarPoints, int spellingPoints, int correctLength, int contentPoints)
		{
			this -> grammarPoints = grammarPoints;
			this -> spellingPoints = spellingPoints;
			this -> correctLength = correctLength;
			this -> contentPoints = contentPoints;
		}
		
		void setGrammarPoints(int grammarPoints)
		{
			this -> grammarPoints = grammarPoints;
		}
		void setSpellingPoints(int spellingPoints)
		{
			this -> spellingPoints = spellingPoints;
		}
		
		void setCorrectLength(int correctLength)
		{
			this -> correctLength = correctLength;
		}
		
		void setContentPoints(int contentPoints)
		{
			this -> contentPoints = contentPoints;
		}
		
		int getGrammarPoints()
		{
			return grammarPoints;
		}
		
		int getSpellingPoints() 
		{
			return spellingPoints;
		}
		
		int getCorrectLength() 
		{
			return correctLength;
		}
		
		int getContentPoints()
		{
			return contentPoints;
		}
};

class Essay : public GradedActivity
{
		int totalPoints;
	
	public:
		Essay(int grammarPoints, int spellingPoints, int correctLength, int contentPoints, int total) : GradedActivity (grammarPoints, spellingPoints, correctLength, contentPoints)
		{
			totalPoints = total;
		}
		
		void setTotalPoints(int totalPoints)
		{
			this -> totalPoints = totalPoints;
		}
		
		int getTotalPoints()
		{
			return totalPoints;
		}
};

int main()
{
	int inputGrammar;
	int inputSpelling;
	int inputLength;
	int inputContent;
	int total;
	
	cout << "Students' Marks Calculation" << endl;
	cout << "---------------------------" << endl;
	cout << "Grammar: 30 points" << endl;
	cout << "Spelling: 20 points" << endl;
	cout << "Correct length: 20 points" << endl;
	cout << "Content: 30 points" << endl;
	
	cout << endl << "Input" << endl;
	cout << "-----" << endl;
	cout << "Grammar: ";
	cin >> inputGrammar;
	
	cout << "Spelling: ";
	cin >> inputSpelling;
	
	cout << "Correct length: ";
	cin >> inputLength;
	
	cout << "Content: ";
	cin >> inputContent;
	cout << endl;
	
	total = (inputGrammar + inputSpelling + inputLength + inputContent);
	
	Essay data(inputGrammar, inputSpelling, inputLength, inputContent, total);
	
	cout << "Student's Report" << endl;
	cout << "----------------" << endl;
	cout << "Grammar: " << data.getGrammarPoints() << endl;
	cout << "Spelling: " << data.getSpellingPoints() << endl;
	cout << "Correct Length: " << data.getCorrectLength() << endl;
	cout << "Content: " << data.getContentPoints() << endl;
	cout << "Total Point: " << data.getTotalPoints() << endl;
	
	if(data.getTotalPoints() > 89)
	{
		cout << "You got a(n) A";
	}
	else if(data.getTotalPoints() > 79)
	{
		cout << "You got a(n) B";
	}
	else if(data.getTotalPoints() > 69)
	{
		cout << "You got a(n) C";
	}
	else if(data.getTotalPoints() > 59)
	{
		cout << "You got a(n) D";
	}
	else
	{
		cout << "You got a(n) F";
	}
	
	return 0;
	
}
