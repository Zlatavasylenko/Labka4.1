#include "matrix.h"
#include <iostream>
int main()
{
    printGroupInfo();

    Matrix mat;
    fillMatrix(mat);
    std::cout << "\nOriginal matrix:" << std::endl;
    printMatrix(mat);

    processMatrix(mat);
    std::cout << "\nProcessed matrix:" << std::endl;
    printMatrix(mat);

    return 0;
}
void printGroupInfo()
{
    std::cout << "Group: K-14" << std::endl;
    std::cout << "Name: Vasylenko Zlata" << std::endl;
    std::cout << "Task: Arrays of arrays and dynamic arrays"<< std::endl;
}
