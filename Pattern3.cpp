#include<iostream>
using namespace std;

int main() {
    int rows;
    int num = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    return 0;
}
