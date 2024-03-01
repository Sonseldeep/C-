#include <iostream>
using namespace std;

class MyClass {
public:
  int data;
  void readData() {
    cout << "Enter an integer: ";
    cin >> data;
  }
};
// ?
int main() {
  MyClass obj1;
  obj1.readData();

  MyClass obj2 = obj1; // Copy data from obj1 to obj2

  cout << "Data in obj1: " << obj1.data << endl;
  cout << "Data in obj2: " << obj2.data << endl;

  return 0;
}