#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {


    for (int step = 0; step < size; ++step) {


        for (int i = 0; i < size - step; ++i) {

            if (array[i] > array[i + 1]) {


                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main() {
    cout << "The prices are as follows:" << endl;
   int data[] = { 50, 60, 20, 10 , 10};


    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Prices in sorted form\n";
    printArray(data, size);
}