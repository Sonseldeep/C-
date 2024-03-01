#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 15, 10, 20, 12, 8};
    

    cout << "Items greater than 10: ";

    for (int i = 0; i < 6; i++) {
        if (arr[i] > 10) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}