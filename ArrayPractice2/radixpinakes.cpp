#include <iostream>
using namespace std;

void radixSort(int arr[], int n) {
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        int count[10] = {0}; // ta stoixia 8a einai apo 0-9
        int output[n]; // Autos o pinakas 8a xreiasti argotera gia to teliko apotelesma

        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10; //etsi briskoume to stixio (number)
            count[digit]++;
        }

        //me auth thn epanalispi briskoume tis 8esis
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1]; 
        }

        // me auth thn epanalipsi bazoume ta stixia ston teliko pinaka output
        for (int i = n - 1; i >= 0; i--) {
            int digit = (arr[i] / exp) % 10;
            output[count[digit] - 1] = arr[i]; 
            count[digit]--; 
        }

        // bazoume ton taksinomimeno pinaka ston arxhko pinaka mas
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 214, 32, 626}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original pinakas: ";
    printArray(arr, n);

    radixSort(arr, n);

    cout << "Fixed pinakas: ";
    printArray(arr, n);

    return 0;
}
