#include <iostream>

using namespace std;

int main() 
{
	//Declaration 
	int mark;
	int total = 0;
	int students = 0;
	double average;
	char x;
	
	//Do while loop to process
	do {
	//coummand prompt for user to enter test mark
	cout << "Enter test mark:" ;
	cin >> mark;
	
	//if condition to deternine if the mark is valide or not
	if (mark < 0 || mark > 100) {
		cout << "Invalid test mark!" << endl;
		cout << "Test mark should be between 0-100\n\n";
		
		//command prompt user to decide either the want to end or  continue
		cout << "Do you want to proceed to re-enter test mark? (Press Y for yes, N for No):" ;
		cin >> x;
	}
	else 	{
		//ugrading student and total
		total = total + mark;
		students++;
		cout << "Do you want to proceed to re-enter test mark? (Press Y for yes, N for No):" ;
		cin >> x;
	}
        //close the loop while user decide to end the program	
		} while (x != 'n');
	
	//diplay result of process
	cout << "The total number of student(s) is " << students << endl;
	cout << "The total mark(s) is " << total << endl;
	cout << "The average mark is " << total / students << endl;
	
	return 0;
}