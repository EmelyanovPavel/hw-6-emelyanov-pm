//Topic 6. Arrays
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>

//Exercise 1. A sequence of numbers is given.
//19)Display elements with even indexes (for a two-dimensional array, 
//the sum of the indexes must be even)

//function for one-dimensional array
void array1()
{
    //One-dimensional array
    int countp = 0;
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Opening the file in write mode
    std::ofstream outfile("one-dimensional_array.txt");
    if (!outfile.is_open()) {
        std::cerr << "Failed to open file for writing.\n";
    }

    // Writing the array elements to the file
    for (int i = 0; i < size; ++i) {
        outfile << arr[i] << " ";
    }

    // Closing the file
    outfile.close();

    // Opening the file in read mode
    std::ifstream infile("one-dimensional_array.txt");

    // Reading the array elements from the file
    for (int i = 0; i < size; ++i) {
        infile >> arr[i];
    }

    // Closing the file
    infile.close();

    // Displaying the array elements
    std::cout << "One-dimensional array elements: \n" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "One-dimensional array elements with even indexes: \n" << std::endl;
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
}
//function for two-dimensional array
void array2()
{

    //Two-dimensional array
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}
    };

    // Opening the file in write mode
    std::ofstream outfile("two-dimensional_array.txt");
    if (!outfile.is_open()) {
        std::cerr << "Failed to open file for writing.\n";
    }

    // Writing the array elements to the file
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
        {
            outfile << matrix[i][j] << " ";
        }
    }

    // Closing the file
    outfile.close();

    // Opening the file in read mode
    std::ifstream infile("two-dimensional_array.txt");

    // Reading the array elements from the file
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            infile >> matrix[i][j];
        }
    }

    // Closing the file
    infile.close();

    // Displaying the array elements
    std::cout << "Two-dimensional array elements: \n" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Two-dimensional array elements with even indexes: \n" << std::endl;

    //Output of elements with even indexes
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                std::cout << "Element [" << i << "][" << j << "] = " << matrix[i][j] << std::endl;
            }
        }
    }
}

void task1()
{
    array1();
    array2();
}

//Exercise 2. A sequence of n-real numbers is given
//19) Display a number of pairs of neighboring elements in which 
//the previous element is a multiple of the next one
void task2()
{
    int count = 0;
    int array[] = { 1, 2, 4, 3, 5};
    int size = sizeof(array);//outputs a size of the array

    // Opening the file in write mode
    std::ofstream outfile("array2.txt");
    if (!outfile.is_open()) {
        std::cerr << "Failed to open file for writing.\n";
    }

    // Writing the array elements to the file
    for (int i = 0; i < size; ++i) {
        outfile << array[i] << " ";
    }

    // Closing the file
    outfile.close();

    // Opening the file in read mode
    std::ifstream infile("array2.txt");

    // Reading the array elements from the file
    for (int i = 0; i < size; ++i) {
        infile >> array[i];
    }

    // Closing the file
    infile.close();

    // Displaying the array elements
    std::cout << "Array elements: \n" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 1; i != size; i++) {
        if (array[i] % array[i - 1] == 0) {
            count++;
        }
    } std::cout << "Pairs of neighboring elements in which the previous element is a multiple of the next one: " << count << std::endl;
}

// Exercise 3. An array of size n*n is given (unless otherwise specified), 
// the elements of which are integers.
// 19)Find the maximum in each row and replace it with the opposite element.

void task3()
{
    int n, m;
    int mxc = 0;
    std::cout << "Enter n and m: ";
    std::cin >> n >> m;
    std::cout << "Enter a numbers: \n";
    int** a = new int* [n];

    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j)
            std::cin >> a[i][j];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < m; ++j)
            if (a[i][j] > a[i][mxc])
                mxc = j;


        a[i][mxc] = a[i][m - mxc - 1];
    }

    std::cout << "result array:\n";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << std::setw(4) << a[i][j];
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i)
        delete[]a[i];
    delete[] a;
}

//Exercise 4. An array of size n*n is given, the elements of which are integers.
//19)For each row, find the number of the first pair of unequal elements. 
//Write the data to a new array.

void task4()
{

    // Declaring array size
    int size;

    //Inputing an array size
    std::cout << "size of array (n*n): ";
    std::cin >> size;

    //Creating a dynamic two-dimensional array
    int** matrix = new int* [size];  //Declaring an array
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    //Creating an array for storing results
    int* results = new int[size];  // Исправлено объявление

    //Inputing an array elements
    std::cout << "elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    //finding a first pair of unequal elements in the every string
    for (int i = 0; i < size; i++) {
        //A flag to check if a pair has been found.
        bool found = false;

        //checking a string elements
        for (int j = 0; j < size - 1; j++) {
            if (matrix[i][j] != matrix[i][j + 1]) {
                results[i] = j;
                found = true;
                break;  // exit the cycle as soon as we found a pair.
            }
        }

        //If pair is not found, writing "-1"
        if (!found) {
            results[i] = -1;
        }
    }

    //Displaying results
    std::cout << "numbers of the first pairs of unequal elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << results[i] << " "; 
    } 
    std::cout << std::endl;

}

//Exercise 5.
//In a one-dimensional array whose elements are integers, perform the following actions:
//19th option. Example 4. Remove all elements from the array whose last digit is equal to this value. 

void task5()
{
    int n;
    std::cout << "Enter n: \n";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a[5];
        std::cout << "a[" << i << "]=";
        std::cin >> a[i];

        if (a[i] % 10 == n) {
            std::cout << a[i] << " ";
            std::cout << std::endl;
        }
    }
}

//Exercise 6.
//In a two - dimensional array whose elements are integers, perform the following actions :
//19th option. Example 4. Insert a new column in front of all columns in which the specified 
//number occurs.

//Function for inserting columns
void insertColumns(std::vector<std::vector<int>>& matrix, int value) {
    //getting the dimensions of the matrix
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();

    //finding the columns in which the specified number occurs
    std::vector<size_t> columnsToInsert;
    for (size_t j = 0; j < cols; ++j) {
        for (size_t i = 0; i < rows; ++i) {
            if (matrix[i][j] == value) {
                columnsToInsert.push_back(j);
                break; //it is enough to find one match in the column
            }
        }
    }

    //if there are columns to insert
    if (!columnsToInsert.empty()) {
        //creating a new matrix with an increased columns number
        size_t newCols = cols + columnsToInsert.size();
        std::vector<std::vector<int>> newMatrix(rows, std::vector<int>(newCols));

        //indexes for new matrix
        size_t newColIndex = 0;
        size_t oldColIndex = 0;

        //going through all the columns of the matrix
        for (size_t i = 0; i < columnsToInsert.size(); ++i) {

            //Copying columns up to the current index
            while (oldColIndex < columnsToInsert[i]) {
                for (size_t row = 0; row < rows; ++row) {
                    newMatrix[row][newColIndex] = matrix[row][oldColIndex];
                }
                ++newColIndex;
                ++oldColIndex;
            }

            //inserting new column
            for (size_t row = 0; row < rows; ++row) {
                newMatrix[row][newColIndex] = 0; // Заполняем нулями
            }
            ++newColIndex;

            //copying current column
            for (size_t row = 0; row < rows; ++row) {
                newMatrix[row][newColIndex] = matrix[row][oldColIndex];
            }
            ++newColIndex;
            ++oldColIndex;
        }

        //copying remaining columns
        while (oldColIndex < cols) {
            for (size_t row = 0; row < rows; ++row) {
                newMatrix[row][newColIndex] = matrix[row][oldColIndex];
            }
            ++newColIndex;
            ++oldColIndex;
        }

        //replacing the original matrix
        matrix = std::move(newMatrix);
    }
}

//function for matrix output
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

void task6() {
    //usage example 
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3, 7},
        {7, 6, 7, 8},
        {9, 7, 11, 12}
    };

    std::cout << "Original matrix:" << std::endl;
    printMatrix(matrix);

    int value = 7;
    insertColumns(matrix, value);

    std::cout << "\nMatrix after insertion:" << std::endl;
    printMatrix(matrix);
}

int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();

    return 0;
}
