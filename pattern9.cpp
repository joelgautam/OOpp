#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= rows - i + 1; ++j) {
            cout << setw(2) << right << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
