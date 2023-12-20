#include<iostream>
using namespace std;
class test
{

int code;
static int count; // static member variable
public:
void setcode(void)
{
code=++count;
}
void showcode(void)
{
cout<<"object member : "<<code<<endl;
}
 static void showcount(void)
{ cout<<"count="<<count<<endl;
 //cout<<code; //this can not be done here because static function will access only
// static variables
}
};
int test:: count;
int main()
{
test t1,t2;
t1.setcode( );
t2.setcode( );
test :: showcount ( );
test t3;
t3.setcode( );
test:: showcount( );//accessing static member function
t1.showcode( );
t2.showcode( );
t3.showcode( );
//test t4;
//t4.showcount(); //it can also be done
return(0);
}