#include <iostream>

using namespace std;

int main () {
    int n = 0;

    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    do {
        sum  += n % 10;
        n = n / 10;
    } while (n > 0);

    cout << "Sum of all digits = " << sum << endl;
    return 0;
}