#include<iostream>
using namespace std;
int main(){
    string name[] = {"nepal"};
    for(int i=1; i<5; i++)
  {
    for(int j=0; j<i; j++)
    {
      printf(" "); // space
    }
    for(int j=i; j<5; j++)
    {
      printf("%c", name[j]); 
    }

    printf("\n"); // new line
  }
  
  return 0;
}
 