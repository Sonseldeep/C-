#include <bits/stdc++.h>
using namespace std;
int main()
{

  int allowance = 950, basic = 95, total = 1045;

  float average = (total / 2);
  cout << "average: " << setprecision(2) << average << endl;

  cout << setw(10) << "allowance" << setw(10) << allowance << endl
       << setw(10) << " basic" << setw(10) << basic << endl
       << setw(10) << " total" << setw(10) << total << endl;

  return 0;
}