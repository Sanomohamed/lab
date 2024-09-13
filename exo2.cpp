#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
//integer variable declaration 	
     int inche,feet;

//centimetres for convert result variable
     double cmi,cmf;

//precision of the number of digit after double;
    cout<<fixed<<setprecision(2);

//commande prompt fom the user
    cout<<"Enter the value of length in inches : ";
    cin>>inche;
    cin.ignore();
    cout<<"enter the value of length in feet : ";
    cin>>feet;
    cout<<endl;

//proceess
   cmi=inche*2.54;
   cmf=feet*30.48;

//delay result of the conversion
   cout<<"convertion fron inche & feet to CM"<<endl;
   cout<<setw(40)<< setfill('-')<<"-"<<endl;
   cout<<inche<<".00"<<" inches is " << cmi<<"cm" <<endl;
   cout<<feet<<".00"<<" feet is " << cmf<<"cm" <<endl;
 return 0;
}