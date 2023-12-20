#include <iostream>
using namespace std;
class Add
{
private:
    int a;
    int b;

public:
    void Result()
    {   
        
        cout << "Sum: " <<a+b<< endl;
        
    }
    void GetData(int a, int b)
    {
        this->a = a;
        this->b = b;
        int sum = a+b;
    }
};
int main(){
    Add o1;
    o1.GetData(9,9);
    o1.Result();
    return 0;
}