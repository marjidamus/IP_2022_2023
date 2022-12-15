#include <iostream>

void deallocate(int **matr, const std::size_t rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matr[i];
    }

    delete[] matr;
}

int **allocate(const std::size_t rows, const std::size_t cols)
{
    int **matr = new (std::nothrow) int *[rows];
    if (!matr)
    {
        std::cout << "Memory allocating problem";
        return nullptr;
    }
    for (int i = 0; i < rows; ++i)
    {
        matr[i] = new (std::nothrow) int[cols];
        if (!matr[i])
        {
            deallocate(matr, i);
            std::cout << "Problem allocating memory";
            return nullptr;
        }
    }

    return matr;
}

void input(int **matr, const std::size_t rows, const std::size_t cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cin >> matr[i][j];
        }
    }
}

void sum(int** matrA, int** matrB, const std::size_t rows, const std::size_t cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout<<matrA[i][j]+matrB[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void diff(int** matrA, int** matrB, const std::size_t rows, const std::size_t cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout<<matrA[i][j]-matrB[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int rows;
    int cols;
    std::cout << "Enter the number of the rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of the columns: ";
    std::cin >> cols;
    int **matrA = allocate(rows, cols);
    int **matrB = allocate(rows, cols);
    std::cout << "Enter the first matrix: ";
    input(matrA, rows, cols);
    std::cout << "Enter the second matrix: ";
    input(matrB, rows, cols);

    sum(matrA,matrB,rows,cols);
    diff(matrA,matrB,rows,cols);

    deallocate(matrA,rows);
    deallocate(matrB,rows);
    return 0;
}