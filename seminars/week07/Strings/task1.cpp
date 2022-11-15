#include <iostream>

const int MAX_SIZE=1024;

int findRem(const char str[],std::size_t len, int num)
{
    int res=0;
    for(int i=0; i<len; ++i)
    {
        res=(res*10 + str[i] - '0') % num;
    }

    return res;
}

int main()
{
    char str[MAX_SIZE];
    int size;
    int num;
    std::cout<<"Enter the length string of numbers: ";
    std::cin>>size;
    std::cin.ignore();
    std::cout<<"Enter the string of numbers: ";
    std::cin.getline(str, size+1);
    std::cout<<"Enter the number for the division: ";
    std::cin>>num;
    std::cout<<findRem(str,size, num);
    
    return 0;
}

