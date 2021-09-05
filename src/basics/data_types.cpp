#include <iostream>
#include <string>
#include <iomanip>

// global variable 
int global_num;

void numeric() {
    int local_num;

    float my_float = 4.9;
    double my_double = 3.9;

    std::cout << "Default value of Global int: " << global_num << std::endl;
    std::cout << "Default value of Local int: " << local_num << std::endl;
    std::cout << "Float: " << my_float << std::endl;
    std::cout << "Double: " << my_double << std::endl;
}


void precision() {
    double pi = 3.14759;

    std::cout << pi << std::endl;
    std::cout << std::setprecision(4) << pi << std::endl;
    std::cout << std::setprecision(10) << pi << std::endl;
    std::cout << std::fixed << std::endl;
    std::cout << std::setprecision(4) << pi << std::endl;
    std::cout << std::setprecision(10) << pi << std::endl;
}

void string_operations() {
    std::string firstname = "Muraleetharan";
    std::string lastname = "Mathanraj";

    auto name  = firstname + " " + lastname;

    std::cout << name.find("Mathan") << std::endl;
    std::cout << name.length() << std::endl;
    std::cout << name.substr(0, 10) << std::endl;
}

void const_example() {
    const int a = 1;
    const int b = 2;

    //a = a + b;
    auto c = a + b;

    std::cout << c << std::endl;
}

int main() {

    numeric();
    std::cout << "============================================" << std::endl;
    precision();
    std::cout << "============================================" << std::endl;
    string_operations();
    std::cout << "============================================" << std::endl;
    const_example();

    return 0;
}