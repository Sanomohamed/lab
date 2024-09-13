#include <iostream>
#include <iomanip> 
#include <math.h>

using namespace std;

int main()
{    //variable declaration
	int a,b,c,d,i,ii,iii,iv;
	
	//command prompt inpoyt from user
	cout<<"Enter the value of a, b, c, and d (integer value) : ";	
	cin>>a>>b>>c>>d;
    cout<<endl;
	
	//processing to the calculations
	i = pow(d,d) - c + a  * a * b + 3 * a - pow(2,2) / ( d * c );
	ii = d / c / a * b + c - (d * (5 + 8 * a * b));
    iii = ((a * b * c) * c + d - a) + (a * b * pow(c,3) + c - d * (a * d)) + a - b - pow(c,c);
    iv = b / c * c * d + a * b - d + (a + c * a * b) * a * d;
    //output
	cout<<"i)  " <<setw(8)<< i  <<endl;
	cout<<"ii) " <<setw(8)<< ii <<endl;
	cout<<"iii)" <<setw(8)<< iii <<endl;
	cout<<"iv) " <<setw(8)<< iv <<endl;
	
	return 0;
	
}