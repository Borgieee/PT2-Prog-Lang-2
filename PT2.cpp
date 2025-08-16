#include <iostream>   // For input/output operations (cin, cout)
#include <conio.h>    // For getch() function (Windows-specific)

// Use the standard namespace to avoid typing std:: before cout/cin
using namespace std;

// Global Variable
// This variable can be accessed from anywhere in the program
// It exists for the entire lifetime of the program
int sharedNumber = 10;

// Function to demonstrate variable types
void showVariables() {
    // Static variable - remembers its value between function calls
    static int rememberMe = 0; // Initialized only once
    
    // Local variable - exists only during function execution
    int tempNumber = 5; // Created new each time function is called
    
    // Display all variable values
    cout << "Shared: " << sharedNumber << endl;     // Global variable
    cout << "Remembered: " << rememberMe << endl;   // Static variable
    cout << "Temporary: " << tempNumber << endl;    // Local variable
    
    rememberMe++; // Increment static variable for next call
}

// Main function
// Every C++ program starts execution from main()
int main() {
    // Declare two integer variables to store user input
    int num1, num2;
    
    // Input Section
    cout << "Enter two whole numbers: ";
    // Store user input in our variables
    cin >> num1 >> num2;
    
    // Math Operations
    cout << "\nCALCULATIONS:" << endl;
    // Basic arithmetic operations
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;  // Addition
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;  // Subtraction
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;  // Multiplication
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;  // Integer division
    cout << "Remainder: " << num1 % num2 << endl;                   // Modulus operation
    
    // Comparison Logic
    cout << "\nCOMPARISON:" << endl;
    // Simple if-else ladder to compare numbers
    if(num1 > num2) {
        cout << "First number is bigger" << endl;
    } 
    else if(num1 < num2) {
        cout << "Second number is bigger" << endl;
    } 
    else {
        cout << "They're equal" << endl;
    }
    
    // Even/Odd Check
    cout << "\nEVEN/ODD CHECK:" << endl;
    // Using modulus operator to check even/odd
    if(num1 % 2 == 0) {  // If divisible by 2 with no remainder
        cout << num1 << " is even" << endl;
    } 
    else {
        cout << num1 << " is odd" << endl;
    }
    
    // Variable Demonstration
    cout << "\nVARIABLE DEMO:" << endl;
    // Call our function to show different variable types
    showVariables();
    
    // Type Conversion Examples
    cout << "\nTYPE EXAMPLES:" << endl;
    // Type casting - converting between data types
    double pi = 3.14159;
    cout << "Pi as whole number: " << (int)pi << endl; // Explicit conversion
    
    // Auto keyword - let compiler determine the type
    auto message = "This is nightmare!!"; // Compiler knows this is const char*
    cout << message << endl;
    
    // Program Termination
    // Wait for user input before closing (Windows-specific)
    cout << "\nPress any key to exit...";
    getch();
    
    // Return 0 to indicate successful execution
    return 0;
}