#include <iostream>
#include <iomanip>
using namespace std;

void CreateArray(int* arr, const int size, const int low, const int high) {
    for (int i = 0; i < size; i++) {
        arr[i] = low + rand() % (high - low + 1);
    }
}


void PrintArray(const int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


void SwapWithLargestOdd(int* arr, const int size) {
    int largestOdd = -1;
    int largestOddIndex = -1;

  
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0 && arr[i] > largestOdd) {
            largestOdd = arr[i];
            largestOddIndex = i;
        }
    }

   
    if (largestOddIndex != -1) {
        swap(arr[size - 1], arr[largestOddIndex]);
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int low = -50, high = 50;

   
    CreateArray(arr, SIZE, low, high);
    cout << "First: ";
    PrintArray(arr, SIZE);

    
    SwapWithLargestOdd(arr, SIZE);

    
    cout << "Modified: ";
    PrintArray(arr, SIZE);

    return 0;
}

   