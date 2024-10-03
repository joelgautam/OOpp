#include<iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= rows - i; ++j) {
            cout << "  "; // print spaces for right justification
        }
        for(int k = 1; k <= i; ++k) {
            if(k == 1 || k == i) {
                cout << "1 "; // print 1 at the start and end of each row
            } else {
                cout << i << " "; // print the row number in the middle columns
            }
        }
        cout << "\n";
    }

    return 0;
}
