#include <iostream>
using namespace std;
class Marks
{
private:
    double a1;
    double a2;
    double a3;

    double p1, p2, p3;

public:
    void SetMark();
    void PublishMark();
};
void Marks::SetMark()
{
    cout << "Assignment Marks: " << endl;
    cout << "enter the marks of A1, A2, A3: ";
    cin >> a1 >> a2 >> a3;
    
    cout << " \nPractical Marks " << endl;
    cout << "enter the P1, P2, P3 : ";
    cin >> p1 >> p2 >> p3;
}
void Marks::PublishMark()
{
    cout << "Assignment Marks: " << endl;
    cout << "A1 = " << a1 << endl
         << "A2=  " << a2 << endl
         << "A3= " << a3;
     cout << " Practical Marks " << endl;
    cout << "P1 = " << p1 << endl
         << "P2=  " << p2 << endl
         << "P3=" << p3;
}
int main()
{
    Marks m;
    m.SetMark();
    m.PublishMark();

    return 0;
}