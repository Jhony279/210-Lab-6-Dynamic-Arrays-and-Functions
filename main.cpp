// COMSC-210 | Lab 6 | Johnathan Perez Baltazar

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void enterArrayData(int[]);
int outputArrayData();
int sumArray();

const int SIZE = 12;

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    int *arr = nullptr;
    arr = new int[SIZE];

    return 0;
}

void enterArrayData(int dArray[]){
    const int spacing = 4;
    int temp = 0;
    int *ptrArray = dArray;

    cout << "Data entry for the array" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << setw(spacing) << "> Element #" << i <<": ";
        cin >> temp;
        ptrArray[i] = temp;

    }
}