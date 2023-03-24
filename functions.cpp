#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include "matrix.h"


void fillMatrix(Matrix& mat)
{
    srand(time(NULL));
    mat.rows = rand() % (N - 2) + 3; // generate a random number between 3 and N
    mat.cols = mat.rows;
    for (int i = 0; i < mat.rows; i++)
    {
        for (int j = 0; j < mat.cols; j++)
        {
            mat.matrix[i][j] = rand() ; // generate a random number
        }
    }
}





void printMatrix(Matrix& mat)
{
    std::cout <<"Size:" <<mat.rows << " * " << mat.cols << std::endl;
    for (int i = 0; i < mat.rows; i++)
    {
        for (int j = 0; j < mat.cols; j++)
        {
            std::cout << std::setw(7) << mat.matrix[i][j];
        }
        std::cout << std::endl;
    }
}



void processMatrix(Matrix& mat) {
bool is_odd = mat.cols % 2 != 0;
int end_col = is_odd ? mat.cols / 2 + 1 : mat.cols / 2;
int start_row = 0, end_row = mat.rows - 1;
int max_row = 0, max_col = 0, max_val = 0;
// Finding the largest element in the left sector of the matrix
for (int col = 0; col < end_col; col++) {
    for (int row = start_row; row <= end_row; row++) {
        int val = abs(mat.matrix[row][col]);
        if (val > max_val || (val == max_val && (row < max_row || (row == max_row && col < max_col)))) {
            max_row = row;
            max_col = col;
            max_val = val;
        }
    }
    start_row++;
    end_row--;
}

// Removing the row and column that contain the largest element
for (int i = max_row; i < mat.rows - 1; i++) {
    for (int j = 0; j < mat.cols; j++) {
        mat.matrix[i][j] = mat.matrix[i + 1][j];
    }
}
mat.rows--;

for (int i = max_col; i < mat.cols - 1; i++) {
    for (int j = 0; j < mat.rows; j++) {
        mat.matrix[j][i] = mat.matrix[j][i + 1];
    }
}
mat.cols--;

// Printing the largest element and the modified matrix
std::cout << "The largest element of the left sector of the matrix is " << max_val
     << " at matrix[" << max_row << "][" << max_col << "].\n";

}





