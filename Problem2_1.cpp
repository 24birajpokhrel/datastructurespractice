// Biraj Pokhrel Problem 2
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. n must be positive." << endl;
        return 1;
    }

    double num, sum = 0.0;
    double minVal, maxVal;

    cout << "Enter " << n << " numbers: " << endl;
    cin >> num; 
    minVal = maxVal = num;
    sum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        sum += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    cout << "minimum: " << minVal << endl;
    cout << "maximum: " << maxVal << endl;
    cout << "average: " << sum / n << endl;

    return 0;
}
