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



bool isUpperMatr(int** matr, const std::size_t rows, const std::size_t cols)
{
    for(int i=0; i<rows-1; ++i)
    {
        int j=cols-1;
        while(j>i)
        {
            if(matr[i][j]!=0)
            {
                return false;
            }
            --j;
        }
    }

    return true;
}

bool isLowerMatr(int** matr, const std::size_t rows, const std::size_t cols)
{
    for(int i=rows-1; i>0; --i)
    {
        int j=0;
        while(j<i)
        {
            
            if(matr[i][j]!=0)
            {
                return false;
            }
            ++j;
        }
    }

    return true;
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
    if(isUpperMatr(matr,rows,cols))
    {
        std::cout<<"This is an upper triangular matrix";
    }
    else if(isLowerMatr(matr,rows, cols))
    {
        std::cout<<"This is a lower triangular matrix";
    }
    else
    {
        std::cout<<"This is neither an upper, nor a lower triangular matrix";
    }
    return 0;
}