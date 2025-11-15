//Biraj Pokhrel Problem 3
#include <iostream>
#include <vector>
using namespace std;

vector<int> findDivisors(int n) {
    vector<int> divisors;
    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    
    return divisors;
}

bool isPerfect(int n) {
    vector<int> divisors = findDivisors(n);
    
    int sum = 0;
    for (int i = 0; i < divisors.size(); i++) {
        sum = sum + divisors[i];
    }
    
    if (sum == n) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "Perfect numbers between 1 and 9999:" << endl;
    
    vector<int> perfectNumbers;
    
    for (int num = 1; num <= 9999; num++) {
        if (isPerfect(num)) {
            perfectNumbers.push_back(num);
        }
    }
    
    for (int i = 0; i < perfectNumbers.size(); i++) {
        cout << perfectNumbers[i] << endl;
    }
    
    cout << "\nFound " << perfectNumbers.size() << " perfect numbers total." << endl;
    
    return 0;
}