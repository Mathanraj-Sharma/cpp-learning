#include <iostream>
#include <typeinfo>

using namespace std;

// dynamic varible of type int | int *ptr = new int
// dynamic array of integers of size n |  int *arr = new int[n]
// dynamic array of integer pointers of size n | int **arr = new int *[n]

void simple_variable() {
    int *a = new int(5);

    cout << *a << endl;
    cout << typeid(*a).name() << endl;
    cout << typeid(a).name() << endl;
    delete a;
}

void array_example_1() {
    int *a, sum = 0;

    a =  new int[6];

    for (int i = 0; i < 6; i++) { a[i] = i+1; }

    for (int i = 0; i < 6; i++) { sum += a[i]; } 

    for (int i = 0; i < 6; i++) { sum += a[i]; }

    cout << sum << endl;
    delete [] a;
}


void array_example_2() {
    int *a, sum = 0;

    a =  new int[6];

    for (int i = 0; i < 6; i++) { a[i] = i+1; }

    for (int i = 0; i < 6; i++) { sum += a[i]; } 

    /* 
    it just say the space allocated for array a can be used by others,
    but the values remain same until some other program change it. 
     
    if just deleted then now it is a dangling pointer.  

    good practice to avoid dangling pointer is to assign nullptr. 
    */
    delete[] a;

    // a = nullptr; 

    for (int i = 0; i < 6; i++) { sum += a[i]; }

    cout << sum << endl;
}


int main() {
    
    // simple_variable();
    // array_example_1();
    array_example_2();
    return 0;
}