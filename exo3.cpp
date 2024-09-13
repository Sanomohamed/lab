#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()

{
	//Variable declaration 
	int l1,l2,l3,l4,l5,w1,w2,w3,w4,w5,h;
     double a,ar,g;
	
	cout<<fixed<<setprecision(2);
	
	//output to get input form the user and design 
	cout<<"Enter the mesurment in feet "<<endl;
	cout<<endl;
	cout<<"DOOR" <<endl;
	cout<< setw(10) <<setfill('-') <<"------";
	cout<<setfill(' ')<<" "<<endl;
	cout<<"Length : ";
	cin>>l1;
	cin.ignore();
	cout<<"width : ";
	cin>>w1;
	cout<<endl;
	cout<<endl;
	//output to get input form the user and design
	cout<<"First Window" <<endl;
	cout<< setw(15) <<setfill('-') <<"---------";
	cout<<setfill(' ')<<" "<<endl;
	cout<<"Length : ";
	cin>>l2;
	cin.ignore();
	cout<<"width : ";
	cin>>w2;
	cout<<endl;
	cout<<endl;
	//output to get input form the user and design
	cout<<"second Window" <<endl;
	cout<< setw(15) <<setfill('-') <<"----------";
	cout<<setfill(' ')<<" "<<endl;
	cout<<"Length : ";
	cin>>l3;
	cin.ignore();
	cout<<"width : ";
	cin>>w3;
	cout<<endl;
	cout<<endl;
	//output to get input form the user and design
	cout<<"Bookshelf" <<endl;
	cout<< setw(10) <<setfill('-') <<"----------";
	cout<<setfill(' ')<<" "<<endl;
	cout<<"Length : ";
	cin>>l4;
	cin.ignore();
	cout<<"width : ";
	cin>>w4;
	cout<<endl;
	cout<<endl;
	//output to get input form the user and design
	cout<<"ROOM" <<endl;
	cout<< setw(10) <<setfill('-') <<"-------";
	cout<<setfill(' ')<<" "<<endl;
	cout<<"Length : ";
	cin>>l5;
	cin.ignore();
	cout<<"width : ";
	cin>>w5;
	cout<<"hight : ";
	cin>>h;
	//process
	a=(l1*w1 )+ (l2*w2) + (l3*w3) + (l4*w4 );
	ar= 2*(h*l5)+ 2*(w5*h);
	g= (ar-a)/120;
	cout<<endl<<endl;
	//output
	cout<< "the amount of paint needed to paint the room: "<< g << " gallons" <<endl;
    return 0;	
}