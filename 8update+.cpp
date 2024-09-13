#include <iostream>
#include <math.h>
using namespace std;

double getvalue(double* r1, double* h1, double* h2, double *r2)
{
	cout<<"Please enter the radius of the cone: ";
	cin>>*r1;
	cout<<"\nPlease enter the hight of the cone: ";
	cin>>*h1;
	cout<<"\nPlease enter the radius of the cylinder: ";
	cin>>*r2;
	cout<<"\nPlease enter the hight of the cylinder: ";
	cin>>*h2;
}

double volcone(double r1, double h1)
{
    double   v1= h1/3 * pow(r1,2) * 3.142;
    return v1;
}
double volcylinder(double r2, double h2)
{
	double	v2= 3.142 * pow(r2,2) * h2;
	return v2;
}

void displayresult(double v1, double v2)
{
	cout<<"The volume of the cone is: "<<volcone<<endl;
	cout<<"The volume of the cylinder is: "<<volcylinder<<endl;	
}

int main()
{
	double r1,h1,r2,h2;
	getvalue(&r1,&h1,&r2,&h2);
	displayresult(volcone(r1,h1),volcylinder(r2,h2));
	return 0;
}

