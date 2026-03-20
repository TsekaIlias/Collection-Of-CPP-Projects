#include <iostream>
using namespace std;

void reverseArray(int* array, int size) {
    int* start = array;           // o diktis sthn arxh tou pinaka
    int* end = array + size - 1;   // o diktis sto telos
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]); //to size tou pinakame me ton tropo pou dolevi mono stous statikous pinakes opou 8a einai 5 (20/5)

    cout << "The original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "The array after the reversal: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
