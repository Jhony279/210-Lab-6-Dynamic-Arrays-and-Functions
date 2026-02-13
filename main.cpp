// COMSC-210 | Lab 6 | Johnathan Perez Baltazar

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void enterArrayData(double[]);
void outputArrayData(double[]);
int sumArray(double[]);

const int SIZE = 6;

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr);
    outputArrayData(arr);
    sumArray(arr);

    return 0;
}

/**
 * @brief - Description of main
 * @return 
*/
void enterArrayData(double dArray[]){
    const int SPACING = 4;
    double temp = 0;
    double *ptrArray = dArray;

    cout << "Data entry for the array" << endl;
    for (int i = 0; i < SIZE; i++){
        cout  << "    > Element #" << i <<": ";
        cin >> temp;
        ptrArray[i] = temp;
    }
    cout << "Data entry complete." << endl;
}

/**
 * @brief - Description of main
 * @return 
*/
void outputArrayData(double dArray[]){
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++){
        cout << *(dArray + i) << " ";
    }
    cout << endl;
}

/**
 * @brief Adds up all the values of an array
 * @param dArray An array of double data type
 * @return The added up value of the array entered
*/
int sumArray(double dArray[]){
    double sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += dArray[i];
    }
    cout << "Sum of values: " << sum;
    return sum;
}