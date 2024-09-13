qsssdf#include <iostream>
using namespace std;
int main()
{
	//variable declaration
	int num;
	int odd = 0;
	int even = 0;
	int zero = 0;
	
	//output instruction user have to follow
	cout<<"Enter 10 integer (positive, negative, or zero)"<<endl;
	
	//for loop to deternine whether the num is even odd or zero
	// loop condition
	for(int i =0; i < 10; i++){
		cin >> num;
		if(num % 2 == 0){
		even++;
		}
		else{
			odd++;
		}
		
		if(num == 0)
		{
			zero++;
		}
		
	}
	
	//display result of the proceess
	cout << "The total number of even numbers entered is "<<even<< " which includes " << zero << " zeroes" <<endl;
	cout << "The total number of odd numbers entered is "<<odd<<endl;
	
	
	
	
	return 0;
}