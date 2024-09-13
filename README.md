# lab
Exo 1 Average Calculator
Overview
This C++ program calculates the average of three integers provided by the user. 
It takes input for three numbers, computes their average, and outputs the result. 
This simple program demonstrates basic input and output operations, as well as arithmetic calculations in C++.

Features
User Input: Prompts the user to input three integers.
Average Calculation: Computes the average of the three input integers.
Output: Displays the computed average.

Code Explanation
Variable Declaration: Defines variables for the three integers (num1, num2, num3) and the average (average).
Input: Uses cin to read the integers from the user.
Average Calculation: Computes the average by summing the three integers and dividing by 3.
Output: Displays the calculated average using cout.

EXO2 Length Conversion Program
Overview
This C++ program converts lengths from inches and feet to centimeters. 
It reads user input for lengths in inches and feet, performs the conversion to centimeters, and displays the results.
The program also formats the output to two decimal places for precision.

Features
Input: Prompts the user to enter lengths in inches and feet.
Conversion: Converts the provided lengths to centimeters using standard conversion factors.
Output: Displays the converted lengths with two decimal precision.
Formatting: Uses formatting options to enhance the readability of the output.

Code Explanation
Variable Declaration:
inche and feet are integer variables to hold the user input.
cmi and cmf are double variables to store the converted lengths in centimeters.
Precision Setting:
Uses fixed and setprecision(2) to format the output to two decimal places.
Input Handling:
Uses cin to read user inputs for inches and feet.
Conversion Calculation:
Converts inches to centimeters by multiplying with 2.54.
Converts feet to centimeters by multiplying with 30.48.
Output Formatting:
Displays results with formatted output, using setw and setfill to create a visual separator line.

EXO3  Paint Calculation Program
Overview
This C++ program calculates the amount of paint needed to paint a room based on the measurements of various components such as doors, windows, and a bookshelf.
The program prompts the user for dimensions of each component and computes the paint required, given that 1 gallon of paint covers 120 square feet.

Features
Input: Prompts the user to enter dimensions for doors, windows, a bookshelf, and the room.
Calculation: Computes the total area to be painted and the amount of paint required based on a coverage rate of 120 square feet per gallon.
Output: Displays the amount of paint needed in gallons.

Code Explanation
Variable Declaration:

l1, l2, l3, l4, l5: Lengths of the door, windows, bookshelf, and room.
w1, w2, w3, w4, w5: Widths of the door, windows, bookshelf, and room.
h: Height of the room.
a: Total area of the door, windows, and bookshelf.
ar: Total area of the walls of the room.
g: Gallons of paint needed.
Input Handling:
Uses cin to read dimensions for each component.
cin.ignore() is used to clear the input buffer after each cin call.
Calculation:
Computes the total area of the components to be excluded from painting.
Calculates the total wall area of the room.
Determines the gallons of paint required based on the coverage rate.
Output Formatting:
Displays the amount of paint needed with two decimal precision.
