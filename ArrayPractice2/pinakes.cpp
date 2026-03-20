#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5; 

//αρχηκα ειχα ενα μεγαλο προγραμμα αλλα εμαθα οτι η παρχει αυτο το template typyname με βοηθεια ai και το εφτιαξα ετσι (Ελπυζω να μην πειραζει) 

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}


template <typename T>
void printArray(const T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    float numbersss[SIZE] = {3.2, 1.5, 4.7, 2.9, 0.4};
    selectionSort(numbersss, SIZE);
    cout << "Sorted by value: ";
    printArray(numbersss, SIZE);

    int numbers[SIZE] = {5, 3, 8, 1, 9};
    selectionSort(numbers, SIZE);
    cout << "Sorted by value: ";
    printArray(numbers, SIZE);


    string words[SIZE] = {"apple", "persona", "icarus", "zero", "water"};
    selectionSort(words, SIZE);
    cout << "Sorted by value: ";
    printArray(words, SIZE);

    return 0;
}
