#include <iostream>
using namespace std;
int main()
{
  int size;
  int *arr;
  cout << "enter the size of arrya: ";
  cin >> size;
  cout << "creating an array of size" << size << "...";
  arr = new int[size];
  cout << "Dynamic Allocation of memory Sucessfully created" << endl;
  delete[] arr;

  return 0;
}