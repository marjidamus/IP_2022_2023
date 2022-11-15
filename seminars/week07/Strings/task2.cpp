#include <iostream>

const int MAX_SIZE=1024;

int calcMax(const char str[], const std::size_t size)
{
    int res=str[0]-'0';
    for(int i=1; i<size; ++i)
    {
        if(str[i]=='0' || str[i]=='1' || res<2)
        {
            res+=(str[i]-'0');
        }
        else
        {
            res*=(str[i]-'0');
        }
    }

    return res;
}

int main()
{
    int size;
    char str[MAX_SIZE];
    std::cout<<"Enter the length of the string: ";
    std::cin>>size;
    std::cout<<"Enter the string of numbers: ";
    std::cin.ignore();
    std::cin.getline(str,size+1);
    std::cout<<calcMax(str,size);
}

