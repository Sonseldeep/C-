#include<iostream>
#include<cstring>
using namespace std;
class StudentInfo {
    private:
    string name;
    char address[50];
    string faculty;
    int roll_no;
    public:
    void PutData();
    void GetData();

};
void StudentInfo :: PutData() {
    cout<<" Enter the name of Student : ";
    getline(cin,name);
    cout<<"\nEnter the address of Student: ";
    cin>> address;
    cout<< "\n Enter the faculty of student: ";
    cin>> faculty;
    cout<<"\nenter the roll no of student : ";
    cin>> roll_no;
}

void StudentInfo::GetData() {
    cout << "Name :"<<name<< endl<< " Address: "<< address<< endl<< " Faculty: "<<faculty<< endl<< " Roll No: "<<roll_no<< endl<< endl;
}
int main(){
    StudentInfo s1;
    s1.PutData();
    s1.GetData();

    return 0;
}