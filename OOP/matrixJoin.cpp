#include <iostream>

using namespace std;

// Function to perform join of two Boolean matrices
void joinMatrix(bool mat1[][10], bool mat2[][10], bool res[][10], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      res[i][j] = mat1[i][j] || mat2[i][j];
    }
  }
}

// Function to perform meet of two Boolean matrices
void meetMatrix(bool mat1[][10], bool mat2[][10], bool res[][10], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      res[i][j] = mat1[i][j] && mat2[i][j];
    }
  }
}

// Function to perform Boolean product of two Boolean matrices
void booleanProductMatrix(bool mat1[][10], bool mat2[][10], bool res[][10], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      res[i][j] = false;
      for (int k = 0; k < cols; k++) {
        res[i][j] = res[i][j] || (mat1[i][k] && mat2[k][j]);
      }
    }
  }
}

// Function to print a Boolean matrix
void printMatrix(bool mat[][10], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  // Create two Boolean matrices
  bool mat1[][10] = {{true, false, true}, {false, true, false}, {true, false, true}};
  bool mat2[][10] = {{false, true, false}, {true, false, true}, {false, true, false}};

  // Create a result matrix to store the result of the operation
  bool res[][10] = {{false, false, false}, {false, false, false}, {false, false, false}};

  // Perform join operation
  joinMatrix(mat1, mat2, res, 3, 3);

  // Print the result matrix
  cout << "The result of join operation is: " << endl;
  printMatrix(res, 3, 3);

  // Perform meet operation
  meetMatrix(mat1, mat2, res, 3, 3);

  // Print the result matrix
  cout << "The result of meet operation is: " << endl;
  printMatrix(res, 3, 3);

  // Perform Boolean product operation
  booleanProductMatrix(mat1, mat2, res, 3, 3);

  // Print the result matrix
  cout << "The result of Boolean product operation is: " << endl;
  printMatrix(res, 3, 3);

  return 0;
}
