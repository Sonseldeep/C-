#include <iostream>

using namespace std;

// Function to calculate the modular inverse of a number
int modularInverse(int a, int m) {
  int u = 1, v = 0, b = a, r = m;
  while (r > 0) {
    int q = b / r;
    int t = u;
    u = v;
    v = t - q * v;
    b = r;
    r = b % r;
  }
  if (b > 1) {
    return -1;
  }
  return u % m;
}

// Function to solve the Chinese Remainder Theorem
int chineseRemainderTheorem(int a[], int m[], int n) {
  int M = 1;
  for (int i = 0; i < n; i++) {
    M *= m[i];
  }

  int x = 0;
  for (int i = 0; i < n; i++) {
    int Mi = M / m[i];
    int Zi = modularInverse(Mi, m[i]);
    x += (a[i] * Mi * Zi) % M;
  }

  return x % M;
}

int main() {
  // Get the number of equations
  int n;
  cout << "Enter the number of equations: ";
  cin >> n;

  // Get the remainders and moduli for each equation
  int a[n], m[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter the remainder for equation " << i + 1 << ": ";
    cin >> a[i];
    cout << "Enter the modulus for equation " << i + 1 << ": ";
    cin >> m[i];
  }

  // Solve the Chinese Remainder Theorem
  int x = chineseRemainderTheorem(a, m, n);

  // Display the solution
  cout << "The solution is: " << x << endl;

  return 0;
}
