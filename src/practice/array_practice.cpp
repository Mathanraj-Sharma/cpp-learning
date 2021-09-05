#include <iostream>
#include <algorithm>

using namespace std;

// print elements of array in given order
void print_array(int* arr, int size, bool reverse=false) {

    if (reverse){
        cout << "Printing array in reverse order" << endl;
        for (int i = size-1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Printing array in order" << endl;
        for (int i  = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// print nth largest element of an array
void print_largest(int* arr, int size, int n=0) {
    
    sort(arr, arr + size);

    if (n == 0) {
        // return the largest
        cout << "largest element = " << arr[size-1] << endl;
    } else {
        // return the nth largest
        cout << n << "(st/rd/th) largest element = " << arr[size - n] << endl;
    }
    cout << endl;
}


int main() {
    int size = 0;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++){
        cout << "Enter " << i+1 << "th Digit = ";
        cin >> arr[i];
    }

    cout << "Size of Array = " << sizeof(arr) / sizeof(arr[0]) << endl;

    // print_array(&arr[0], size, false);
    // print_array(&arr[0], size, true);

    print_largest(&arr[0], size);
    print_largest(&arr[0], size, 1);
    print_largest(&arr[0], size, 2);
    print_largest(&arr[0], size, 3);
    print_largest(&arr[0], size, 4);
    print_largest(&arr[0], size, 5);
    return 0;
}