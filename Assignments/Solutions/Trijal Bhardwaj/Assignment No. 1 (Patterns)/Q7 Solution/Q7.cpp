/*
Question 7
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/

#include <iostream>
using namespace std;
int main() {
    int rows, coeff = 1;
    cout << "Enter the Number of Rows : ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coeff = 1;
            else
                coeff = coeff * (i - j + 1) / j;
            cout << coeff << " ";
        }
        cout << endl;
    }
    return 0;
}
