// to add the two different times in form of hrs and min;

#include <iostream>
using namespace std;

class Time
{

  int hrs, min;

public:
  void GetData(int h, int m)
  {
    this->hrs = h;
    this->min = m;
  }
  void Display()
  {
    cout << hrs << "hrs and " << min << " min " << endl;
  }

  void sum(Time t1, Time t2);
};
void Time::sum(Time t1, Time t2)
{
  min = t1.min + t2.min;
  hrs = (min / 60);
  min = (min % 60);
  hrs = hrs + t1.hrs + t2.hrs;
}
int main()
{
  Time T1, T2, T3;
  T1.GetData(5, 48);
  T2.GetData(7, 39);
  T3.sum(T1, T2);
  T3.Display();

  return 0;
}