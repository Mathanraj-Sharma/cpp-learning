#include <iostream>

using namespace std;

long long factorial(int n) {
    long long factor = 1;

    if (n == 0 || n == 1) {
        return factor; 
    } else {
        for (int i = 2; i <= n; i++) {
            factor = factor * i;
        }
    }

    return factor;
}

int main () {
    int n  = 0;

    cout << "Enter the Number: ";
    cin >> n;

    long long fac = factorial(n);
    cout << "Factorial of " << n << " = " << fac << endl;
}