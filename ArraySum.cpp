#include <iostream>
using namespace std;

//polla apo autes tis entoles tis breika sto internet (px to "sizeof")

int sumArray(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // 8a mporouse na einai otidipote h na to diabasoume
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The sum of the array is : " << sumArray(arr, size) << endl;

    return 0;
}
