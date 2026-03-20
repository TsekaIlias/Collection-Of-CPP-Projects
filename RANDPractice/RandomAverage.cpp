#include <iostream>
#include <cstdlib>  // googlara gia na bro auto to include gia tis srand() kai rand()
using namespace std;

void calculateAverageAndCount(int* array, int size, double& average, int& count) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    average = static_cast<double>(sum) / size; //to sigkekrimeno eprepe na to psakso sto internet  
    count = 0;
    for (int i = 0; i < size; i++) {
        if (abs(array[i] - average) <= 0.1 * average) {
            count++;
        }
    }
}

int main() {
    const int SIZE = 100;    
    int arr[SIZE];
    srand(12345); //me erevna ema8a pos ka8e fora 8a exoume paromious ari8mos me auto to seed

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;  // random numbers apo 1 mexri 100
    }

    double average = 0.0;
    int count = 0;

    calculateAverageAndCount(arr, SIZE, average, count);
    
    cout << "The average: " << average << endl;
    cout << "The numbers that are 10% close to the average " << count << endl;

    return 0;
}
