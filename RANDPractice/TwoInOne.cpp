#include <iostream>
#include <cstdlib>  
using namespace std;

void columnSums(int a[5][5], int col[5]) {
    for (int i = 0; i < 5; i++) {
        col[i] = 0;
    }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            col[j] += a[i][j];
        }
    }
}

int main() {
    int a[5][5];       
    int col[5];            
    srand(12345);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 1000 + 1;  // Random numbers apo to 1 mexri 1000
        }
    }

    columnSums(a, col);

    cout << "Array a:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << "\t";  // emfanisi me tabulation
        }
        cout << endl; 
    }

    cout << "Sum of Index" << endl;
    int maxSumIndex = 0;  
    for (int j = 0; j < 5; j++) {
        cout << "Index " << j + 1 << ": " << col[j] << endl;
        if (col[j] > col[maxSumIndex]) {
            maxSumIndex = j;  
        }
    }
    cout << "The index with the bigger number is " << (maxSumIndex + 1) << " with a sum of " << col[maxSumIndex] << endl;

    return 0;
}
