#include <iostream>
using namespace std;
class Test
{

  int number;
  static int count;

public:
  void getData(int a)
  {
    this->number = a;
    cout << "Number: " << number << endl;
    count++;
  }

  void DisplayCount(void)
  {

    cout << "count: " << count << endl;
  }
};

int Test ::count;
// int Test :: count = 12;
// 12 is the initial count
// 12 +1+1 = 14 return
int main()
{
  Test t1, t2;
  t1.DisplayCount();
  t2.DisplayCount();

  cout << "Static: " << endl;
  t1.getData(5);
  t2.getData(6);

  t1.DisplayCount();
  t2.DisplayCount();

  return 0;
}