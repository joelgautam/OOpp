#include<iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for(int k = 1; k <= rows - i; ++k) {
            cout << " ";
        }
        // Print asterisks
        for(int j = 1; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
