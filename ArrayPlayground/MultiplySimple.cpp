#include <iostream>
using namespace std;

int multiply(int* a, int* b) {
    return (*a) * (*b);  
}

int main() {
    int x = 5;
    int y = 10;

    cout << "To ginomeno " << x << " kai " << y << " einai: " << multiply(&x, &y) << endl;

    return 0;
}
