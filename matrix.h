#pragma once

const int N = 20;

struct Matrix
{
    int rows;
    int cols;
    int matrix[N][N];
};

void printGroupInfo();
void fillMatrix(Matrix& mat);
void processMatrix(Matrix& mat);
void printMatrix(Matrix& mat);
