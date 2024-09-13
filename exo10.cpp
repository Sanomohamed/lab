#include <iostream>
using namespace std;

int main()
{

//declaration variable and counter	
    int input[100], count=5, i, min;
//output for user to enter numbers
    cout << "Enter " << count << " number in the array: ";
     
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
    min=input[0];
   for(i = 0; i < count; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
     cout  << "The minimum number in the array is: " << min <<endl;
    
    return 0;
}

    