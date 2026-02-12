// COMSC-210 | Lab 6 | Johnathan Perez Baltazar

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void enterArrayData(int[]);
int outputArrayData();
int sumArray();

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    return 0;
}

void enterArrayData(int[]){
    const int spacing = 4;

    cout << "Data entry for the array" << endl;
    for (int i = 0; i < 10; i++){
        cout << setw(spacing) << "> Element #" << i <<": ";
    }
}