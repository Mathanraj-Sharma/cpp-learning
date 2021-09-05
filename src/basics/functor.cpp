#include <iostream>

using namespace std;

int sum(int* a, int* b) {
    int total = *a + *b;
    return total;
}

int main() {
    int (*func)(int*, int*);

    func = &sum;

    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;

    cout << a << " + " << b << " =  " << func(&a, &b) << endl;

    return 0;
}
