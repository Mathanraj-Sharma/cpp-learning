#include <iostream>

using namespace std;


// array of n pointers to chars  | char *ptr[n]
// pointer to an array of n chars | char (*ptr)[n]
// pointer to a function which recieves nothing and returns a pointer to an interge | int *(*ptr)()
// is this declaration correct void (*f) (int, void (*)()) ? | yes 



void simple_pointer_example() {
    int *p, a;

    cout << "Enter a Number = ";
    cin >> a;

    p = &a;
    cout << "Value before changing = " << a << endl;
    
    *p += 20;
    cout << "Value after changing = " << a << endl;
}

void pointer_arithmatic_array() {
    int arr[] = {11, 22, 33, 44, 55, 66};
    int *ptr1 = arr;
    int *ptr2 = arr + 6;

    // number of elements between ptr1 and ptr2
    cout << "number of elements between ptr1 and ptr2: " << ptr2 - ptr1 << endl;

    // number of bytes between ptr1 and ptr2
    cout << "number of bytes between ptr1 and ptr2: " << (char *) ptr2 - (char *) ptr1 << endl;
}

int p_of_p(int p, int *q, int **r) {
    ++*q;
    **r *= 2;
    p %= 11;
    return (p + *q + **r);
}

void pointer_of_pointer(){
    int *p, a;

    cout << "Enter the number = ";
    cin >> a;

    p = &a;

    cout << "Output p_of_p= " << p_of_p(a, &a, &p) << endl;
    cout << "Output a = " << a << endl;
}

int main() {
    
    // simple_pointer_example();
    // pointer_arithmatic_array();
    pointer_of_pointer();
    return 0;
}