#include<iostream>

using namespace std;

int main()

{
	//declaration of variable;
	int num1, num2, num3, average;
	
	//command prompt input from user
	cout<<"num1 = ";
	cin>> num1;
	cout<<"num2 = ";
	cin>> num2;
	cout<<"num3 = ";
	cin>> num3;
	
	// process of average calculation
	average= (num1 + num2 + num3)/3;
	
	//output of the average value
	cout<<"average = "<< average <<endl;
    return 0;
	
}