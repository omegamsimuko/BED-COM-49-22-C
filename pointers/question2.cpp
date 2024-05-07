#include <iostream>

int main() {
    //declare two intergers variables
    int rows, cols;

    // Get dimensions from the user
    std::cout << "Enter the number of rows (maximum 3): ";
    std::cin >> rows;
    if (rows > 3) {
        std::cout << "Maximum number of rows exceeded. Setting rows to 3." << std::endl;std::cin >> cols;
        rows = 3;
    }

    std::cout << "Enter the number of columns (maximum 3): ";
    //take input from user and store it in the variable
    std::cin >> cols;
    if (cols > 3) {
        std::cout << "Maximum number of columns exceeded. Setting columns to 3." << std::endl;
        cols = 3;
    }

    // Dynamically allocate the 2D array
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    // Assign values to each element using nested loops
    std::cout << "Enter values for the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> array2D[i][j];
        }
    }

    // Output the values of each element
    std::cout << "Values of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array2D[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}


