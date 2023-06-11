
#include <iostream>
#include <cmath>
using namespace std;

// Declare the function calc that takes two doubles as input and returns a double
double calc(double, double);

// Declare global variables num1, num2, cube, and square
double num1, num2;
double cube;
double square;

// Define the function calc that calculates the cube and square of the input numbers and returns their sum
double calc(double cube, double square)
{
    // Calculate the cube of num1 and assign it to the variable cube
    cube = pow(num1, 3);
    // Calculate the square of num2 and assign it to the variable square
    square = pow(num2, 2);

    // Return the sum of cube and square
    return (cube + square);
}

int main()
{
    // Prompt the user to enter two numbers
    cout << "Enter Two Numbers:" << endl;
    // Read in the two numbers from the user and assign them to num1 and num2
    cin >> num1 >> num2;

    // Declare a variable answer of type double
    double answer;
    // Call the function calc with num1 and num2 as input and assign the result to answer
    answer = calc(num1, num2);
    // Print the value of answer to the console
    cout << "Answer=" << answer << endl;

    // End the program
    return 0;
}
