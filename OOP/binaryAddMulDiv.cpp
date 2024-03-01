#include <iostream>

using namespace std;

// Function to perform binary addition
int binaryAddition(int a, int b) {
  int carry = 0;
  int sum = 0;
  while (a != 0 || b != 0) {
    int digitSum = (a % 10 + b % 10 + carry) % 2;
    carry = (a % 10 + b % 10 + carry) / 2;
    sum = sum * 10 + digitSum;
    a /= 10;
    b /= 10;
  }
  if (carry != 0) {
    sum = sum * 10 + carry;
  }
  return sum;
}

// Function to perform binary multiplication
int binaryMultiplication(int a, int b) {
  int product = 0;
  for (int i = 0; i < b; i++) {
    product = binaryAddition(product, a);
  }
  return product;
}

// Function to perform binary division
int binaryDivision(int a, int b) {
  int quotient = 0;
  int remainder = a;
  while (remainder >= b) {
    quotient++;
    remainder -= b;
  }
  return quotient;
}

int main() {
  // Get the two binary numbers from the user
  int a, b;
  cout << "Enter the first binary number: ";
  cin >> a;
  cout << "Enter the second binary number: ";
  cin >> b;

  // Perform binary addition, multiplication, and division
  int sum = binaryAddition(a, b);
  int product = binaryMultiplication(a, b);
  int quotient = binaryDivision(a, b);

  // Display the results
  cout << "The sum of the two binary numbers is: " << sum << endl;
  cout << "The product of the two binary numbers is: " << product << endl;
  cout << "The quotient of the two binary numbers is: " << quotient << endl;

  return 0;
}
