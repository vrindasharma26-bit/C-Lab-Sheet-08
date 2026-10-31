#include <iostream>
using namespace std;

int diagonalSum(int a[10][10], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i][i];

    return sum;
}

int main() {
    int a[10][10], n;

    cout << "Enter matrix size: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Diagonal sum: " << diagonalSum(a, n);

    return 0;
}
