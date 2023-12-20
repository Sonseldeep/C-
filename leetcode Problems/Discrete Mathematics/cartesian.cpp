#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> cartesianProduct(vector<int> set1, vector<int> set2) {
  
  vector<vector<int>> product;

  
  for (int i = 0; i < set1.size(); i++) {
    
    for (int j = 0; j < set2.size(); j++) {
      
      vector<int> temp;
      temp.push_back(set1[i]);
      temp.push_back(set2[j]);

      
      product.push_back(temp);
    }
  }

  return product;
}


int main() {
  
  vector<int> set1 = {1, 2, 3};

  
  vector<int> set2 = {4, 5, 6};

  
  vector<vector<int>> product = cartesianProduct(set1, set2);

  
  for (vector<int> vec : product) {
    for (int num : vec) {
      cout << num << " ";
    }
    cout << endl;
  }
  cout<<"By Sandeep Shrestha"<<endl;

  return 0;
}
