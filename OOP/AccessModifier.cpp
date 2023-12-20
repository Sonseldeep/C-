#include<iostream>
using namespace std;
  class hero {
    // by default it will be private;
     
     // using public: method we can access the below public defining variable in all progrma as like global varibale
     public:
        string name;
        char level;
        int age;

        // private allow within the class only
        private:
        char key;
        

        void print(){
            cout <<key << endl;
        } 
       


    };
int main(){
    hero sandeep;
    sandeep.name = "Sandeep Shrestha";
    sandeep.level = 'A';
    sandeep.age = 20;
    cout << " Name = " << sandeep.name << endl << "Level = "<< sandeep.level << endl<< "Age = "<<sandeep.age<<endl;
    
  
    return 0;
}