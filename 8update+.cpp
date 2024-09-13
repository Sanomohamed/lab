#include <iostream>
#include <cmath>
using namespace std;

void getvalue(double* r1, double* h1, double* h2, double *r2)
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
    return (M_PI * pow(r1, 2) * h1) / 3;
}
double volcylinder(double r2, double h2)
{
  return M_PI * pow(r2, 2) * h2;
}

void displayresult(double v1, double v2)
{
	cout<<"The volume of the cone is: "<<volcone<<endl;
	cout<<"The volume of the cylinder is: "<<volcylinder<<endl;	
}

int main(){
double r1, h1, r2, h2;
    getvalue(&r1, &h1, &r2, &h2);

    // Calculate volumes
    double coneVolume = volcone(r1, h1);
    double cylinderVolume = volcylinder(r2, h2);

    // Display the results
    displayresult(coneVolume, cylinderVolume);

    return 0;
}
