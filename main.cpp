// COMSC-210 | Lab 6 | Johnathan Perez Baltazar

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void enterArrayData(double[]);
void outputArrayData(double[]);
int sumArray();

const int SIZE = 12;

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr);
    outputArrayData(arr);

    return 0;
}

void enterArrayData(double dArray[]){
    const int spacing = 4;
    double temp = 0;
    double *ptrArray = dArray;

    cout << "Data entry for the array" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << setw(spacing) << "> Element #" << i <<": ";
        cin >> temp;
        ptrArray[i] = temp;
    }
}

void outputArrayData(double dArray[]){
    cout << "Dynamic array member: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(dArray + i) << " ";
    }
    cout << endl;
}