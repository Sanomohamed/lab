# lab
##Exo 1 Average Calculator
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

###EXO 2 Length Conversion Program
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

####EXO 3  Paint Calculation Program
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

#####EXO 4 Arithmetic Calculation Program
Overview
This C++ program performs a series of arithmetic calculations based on user-provided integer values.
The program takes four integers as input and computes four different expressions using these integers.
The results are then displayed in a formatted manner.

Features
Input: Prompts the user to enter four integer values.
Calculations: Performs a series of arithmetic operations and power functions.
Output: Displays the results of the calculations in a formatted way.

Code Explanation
Variable Declaration:

a, b, c, d: Integer variables for user input.
i, ii, iii, iv: Variables to store the results of different calculations.
Input Handling:
Uses cin to read four integer values from the user.
Processing Calculations:
i: Computes an expression involving powers, multiplications, additions, and divisions.
ii: Calculates an expression involving divisions, multiplications, and nested parentheses.
iii: Evaluates a complex expression with multiple arithmetic operations and powers.
iv: Computes another arithmetic expression involving divisions, multiplications, and parentheses.
Output Formatting:
Uses setw from <iomanip> to align the results for better readability.

######EXO 5 Student Test Marks Average Program
Overview
This C++ program collects and displays the test marks for a student and calculates the average of these marks.
The program prompts the user to input the student's name and five test marks, and then it outputs the results in a formatted manner.

Features
Input: Prompts the user to enter the student's name and five test marks.
Processing: Calculates the average of the five test marks.
Output: Displays the student's name, individual test marks, and the average in a neatly formatted output.

Code Explanation
Variable Declaration:
name: A string variable to store the student's name.
m1, m2, m3, m4, m5: Integer variables to store the test marks.
average: Integer variable to store the calculated average of the test marks.
Input Handling:
Uses getline to read the student's name, allowing for names with spaces.
Uses cin to read the five test marks.
Processing:
Calculates the average of the five test marks using integer arithmetic.
Output Formatting:
Uses setw from <iomanip> to align the output for better readability.
Displays each test mark and the average with a .0% suffix for consistency.

#######EXO 6 Even, Odd, and Zero Number Counter
Overview
This C++ program counts the number of even, odd, and zero values entered by the user. 
The user is prompted to input 10 integers, which can be positive, negative, or zero. 
The program then categorizes these integers and displays the counts for even numbers, odd numbers, and zeros.

Features
Input: Prompts the user to enter 10 integers.
Processing: Counts the number of even numbers, odd numbers, and zeros from the entered integers.
Output: Displays the counts of even numbers, odd numbers, and zeroes.

Code Explanation
Variable Declaration:
num: Integer variable to store the current input number.
odd, even, zero: Integer variables to count odd numbers, even numbers, and zeroes, respectively.
Input Handling:
Uses a for loop to prompt the user to enter 10 integers.
Processing:
Checks if each number is even or odd using the modulo operator (%).
Increments the appropriate counter based on the number's value.
Specifically checks for zeroes and increments the zero counter if the number is zero.
Output:
Displays the counts of even numbers (including zeroes), odd numbers, and zeroes in a formatted manner.

########EXO 7 Test Mark Averaging Program
Overview
This C++ program allows users to input test marks for multiple students.
The program calculates the total number of students, the total sum of the test marks, and the average mark. 
The user can re-enter test marks as needed and will be prompted to proceed or exit based on their input.

Features
Input Validation: Ensures that test marks are between 0 and 100.
Total Calculation: Accumulates the total test marks.
Average Calculation: Computes the average mark based on valid inputs.
User Interaction: Prompts the user to either continue entering marks or end the process.

Code Explanation
Variable Declaration:
mark: Integer to store the current test mark input.
total: Integer to accumulate the sum of all valid test marks.
students: Integer to count the number of valid test marks entered.
average: Double to store the computed average mark.
x: Character to capture user response on whether to continue or not.
Input Handling:
Uses a do-while loop to repeatedly prompt the user for test marks.
Validates if the entered mark is within the range of 0 to 100.
Allows the user to re-enter marks or exit based on input.
Processing:
Calculates the total and average marks based on valid inputs.
Output:
Displays the total number of students, total marks, and the average mark.

#########EXO 8 
##########EXO 9
###########EXO 10 
