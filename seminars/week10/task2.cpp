#include <iostream>

void input(int** matr, const std::size_t rows)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<rows; ++j)
        {
            std::cin>>matr[i][j];
            if(!std::cin)
            {
                std::cout<<"Invalid input";
                return;
            }
        }
    }
}

void deallocate(int** matr, const std::size_t rows)
{
    for(int i=0; i<rows; ++i)
    {
        delete[] matr[i];
    }
    delete[] matr;
}

int** allocate(const std::size_t rows)
{
    int** matr=new(std::nothrow)int*[rows];
    if(!matr)
    {
        std::cout<<"Memory allocating problem";
        return nullptr;
    }
    for(int i=0; i<rows; ++i)
    {
        matr[i]=new(std::nothrow)int[rows];
        if(!matr[i])
        {
            deallocate(matr,i);
            std::cout<<"Memory allocating problem";
            return nullptr;
        }
    }

    return matr;
}

bool isMagic(int** matr, const std::size_t rows)
{
    int sumRows=0;
    int sumCols=0;
    int sumDiag1=0;
    int sumDiag2=0;

    for(int i=0; i<rows; ++i)
    {
        sumDiag1+=matr[i][i];
        sumDiag2+=matr[i][rows-1-i];
    }

    
    if(sumDiag1!=sumDiag2)
    {
        return false;
    }
 

    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<rows; ++j)
        {
            sumRows+=matr[i][j];
            sumCols+=matr[j][i];
        }
        if(sumRows!=sumCols || sumCols!=sumDiag1)
        {
            return false;
        }
        sumRows=0;
        sumCols=0;
    }

    return true;
    
}


int main()
{
    int rows;
    std::cout << "Enter the number of the rows: ";
    std::cin >> rows;
    int **matr = allocate(rows);
    input(matr, rows);
    std::cout<<std::boolalpha<<isMagic(matr,rows);
    deallocate(matr,rows);
    return 0;
}