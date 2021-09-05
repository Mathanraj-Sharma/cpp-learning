#include <iostream>
#include <string>

using namespace std;

void if_else_example() {
    int n = 0;
    cout << "Enter your age: ";
    cin >> n;

    if (n >= 30) {
        cout << "You are eligible for vaccination" << endl;
    } else if (n > 18 && n < 30) {
        cout << "You have to wait two more weeks for vaccination" << endl;
    } 
    else {
        cout << "You are not eligible for vaccination" << endl;
    }
}

void switch_case_example() {
    char n;
    cout << "Enter the first character of your name: ";
    cin >> n;

    switch (n)
    {
    case 'M':
        cout << "You can only marry Ramya" << endl;
        break;
    case 'R':
        cout << "You can only marry Mathan" << endl;
    default:
        cout << "Sorry we don't have any recommendation for you" << endl;
        break;
    }
}


void for_loop_example() {
    int n = 0;
    cout << "Enter the count: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "For loop" << i << endl;
    }
}


void while_loop_example() {
    int n = 0;
    cout << "Enter the count: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        cout << "While loop: " << i << endl;
        i++;
    }
}

void do_while_example() {
    int n = 0;
    cout << "Enter the count: ";
    cin >> n;

    int i = 0;

    do
    {
        cout << "Do while loop: " << i << endl;
        i++;
    } while (i < n);
    
}


int main() {
    // if_else_example();

    // for_loop_example();

    // while_loop_example();

    // do_while_example();
    
    switch_case_example();
    
    return 0; 
}