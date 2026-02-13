// COMSC-210 | Lab 6 | Johnathan Perez Baltazar

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void enterArrayData(double[]);
void outputArrayData(double[]);
int sumArray(double[]);

// Constant for the size of the array
const int SIZE = 5;

/**
 * @brief Main function of the code, creates a dynamic array and inserts
 *        it into the 3 functions created
 * @return 
*/
int main() {
    // Create a null pointer
    double *arr = nullptr;
    // Assign pointer to a new dynamic array
    arr = new double[SIZE];

    // Populate array
    enterArrayData(arr);
    // Print array elements
    outputArrayData(arr);
    // Print the entire sum of the elements
    double arraySum = sumArray(arr);
    cout << "Sum of values: " << arraySum << endl;

    return 0;
}

/**
 * @brief This function populates an array by having the user 
 *        enter n amount of values  
*/
void enterArrayData(double dArray[]){
    double temp = 0;
    // Create a pointer and assign it to the array being passed
    double *ptrArray = dArray;

    cout << "Data entry for the array" << endl;
    // Loops through array and populates it based on the users input
    for (int i = 0; i < SIZE; i++){
        cout  << "    > Element #" << i <<": ";
        cin >> temp;
        ptrArray[i] = temp;
    }
    cout << "Data entry complete." << endl;
}

/**
 * @brief Prints out all the values inside an array
*/
void outputArrayData(double dArray[]){
    cout << "Outputting array elements: ";
    // Loop through array and print out each element
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

    // Loops through all the elements in the array
    for (int i = 0; i < SIZE; i++){
        // Add the value of the current element into `sum`
        sum += dArray[i];
    }
    return sum;
}