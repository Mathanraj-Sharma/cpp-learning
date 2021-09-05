#include <iostream>
#include <typeinfo>

using namespace std;

/*
valid typecast formats

(type) expression | value
type(expression | value)
(type)(expression)
*/

void demo_1() {
    int a = 257;

    char ch = (char)a + 'a';
    printf("%c\n", ch);
}

int main() {

    demo_1();
    return 0;
}