#include<iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    char ch = 'A';

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= rows - i + 1; ++j) {
            cout << ch << " ";
            ch++;
            if(ch > 'Z') {
                ch = 'A';
            }
        }
        cout << "\n";
    }

    return 0;
}
