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

void printSpiral(int **matr, const std::size_t rows, const std::size_t cols)
{
    int stR = 0;
    int endR = rows;
    int stC = 0;
    int endC = cols ;

    while (stR < endR && stC < endC)
    {
        for (int i = stC; i < endC; ++i)
        {
            std::cout << matr[stR][i]<<" ";
        }
        ++stR;

        for (int i = stR; i < endR; ++i)
        {
            std::cout << matr[i][endC-1]<<" ";
        }
        --endC;
        if (stR < endR)
        {
            for (int i = endC-1; i >= stC; --i)
            {
                std::cout << matr[endR-1][i]<<" ";
            }
            --endR;
        }
        if(stC<endC)
        {
            for(int i=endR-1; i>=stR; --i)
            {
                std::cout<<matr[i][stC]<<" ";
            }
            ++stC;
        }
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
    int **matr = allocate(rows, cols);
    input(matr, rows, cols);
    printSpiral(matr, rows, cols);
    deallocate(matr, rows);
    return 0;
}