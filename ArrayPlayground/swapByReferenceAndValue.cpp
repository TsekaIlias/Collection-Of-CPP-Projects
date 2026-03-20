#include <iostream>

void byvalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside the value function: a = " << a << ", b = " << b << std::endl;
    //To bazo auto logo tou epeidi ginete mesa se void function den 8a gini kamia allagi
}

void byreference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 6, y = 9;

    std::cout << "Before the value function: x = " << x << ", y = " << y << std::endl;
    byvalue(x, y);
    std::cout << "After the value function: x = " << x << ", y = " << y << std::endl;
    //den 8a exei allaksi kati

    std::cout << "\nBefore the reference function: x = " << x << ", y = " << y << std::endl;
    byreference(x, y);
    std::cout << "After the reference function: x = " << x << ", y = " << y << std::endl;

    return 0;
}
