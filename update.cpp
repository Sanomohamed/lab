#include <iostream>
using namespace std;

// Function to display the menu
void menu() {
    cout << "This program lets the user perform arithmetic operations on fractions.\nChoose the operation you want to perform (1, 2, 3, or 4):" << endl;
    cout << "1 - Addition" << "\n2 - Subtraction" << "\n3 - Multiplication" << "\n4 - Division" << endl << endl;
}

// Function to add fractions
void addFraction() {
    int a, b, c, d;
    cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
    cin >> a >> b >> c >> d;
    
    int numerator = (a * d) + (b * c);
    int denominator = b * d;
    
    cout << "After addition, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}

// Function to subtract fractions
void subtractFraction() {
    int a, b, c, d;
    cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
    cin >> a >> b >> c >> d;
    
    int numerator = (a * d) - (b * c);
    int denominator = b * d;
    
    cout << "After subtraction, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}

// Function to multiply fractions
void multiplyFraction() {
    int a, b, c, d;
    cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
    cin >> a >> b >> c >> d;
    
    int numerator = a * c;
    int denominator = b * d;
    
    cout << "After multiplication, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}

// Function to divide fractions
void divideFraction() {
    int a, b, c, d;
    cout << "Enter four integers representing the numerators and denominators of two fractions:" << endl;
    cin >> a >> b >> c >> d;
    
    int numerator = a * d;
    int denominator = b * c;
    
    cout << "After division, the numerator of the result is: " << numerator << " ,and the denominator of the result is: " << denominator << "." << endl;
}

int main() {
    char x;
    do {
        menu();
        
        int choice;
        cin >> choice;
        
        switch (choice) {
            case 1:
                addFraction();
                break;
            case 2:
                subtractFraction();
                break;
            case 3:
                multiplyFraction();
                break;
            case 4:
                divideFraction();
                break;
            default:
                cout << "Invalid choice. Please select a valid operation." << endl;
        }
        
        cout << endl;
        cout << "Do you wish to perform another operation? (y or n): " << endl;
        cin >> x;
        cout << endl;
    } while (x != 'n');
    
    cout << "You ended the program..." << endl;
    
    return 0;
}
