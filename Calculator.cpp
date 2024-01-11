#include <iostream>

using namespace std;

// Function for addition
int addition(int x, int y) {
  int z = x + y;
  return z;
}

// Function for subtraction
int subtraction(int x, int y) {
  int z = x - y;
  return z;
}

// Function for multiplication
int multiplication(int x, int y) {
  int z = x * y;
  return z;
}

// Function for division
double division(double x, double y) {
  if (y == 0) {
    cout << "Error: Division by zero" << endl;
    return 0; // Handle division by zero
  } else {
    double z = x / y;
    return z;
  }
}

int main() {
  int x, y;
  char operation;

  cout << "Enter first number: ";
  cin >> x;

  cout << "Enter second number: ";
  cin >> y;

  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  switch (operation) {
    case '+':
      cout << "Result: " << addition(x, y) << endl;
      break;
    case '-':
      cout << "Result: " << subtraction(x, y) << endl;
      break;
    case '*':
      cout << "Result: " << multiplication(x, y) << endl;
      break;
    case '/':
      double result = division(x, y);
      if (result != 0) { // Check for division by zero error
        cout << "Result: " << result << endl;
      }
      break;
      cout << "Invalid operation" << endl;
  }

  return 0;
}
