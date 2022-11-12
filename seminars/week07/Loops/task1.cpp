#include <iostream>

int fact(int num)
{
    int fact=1;
    for(int i=1; i<=num; ++i)
    {
        fact*=i;
    }

    return fact;
}

int main()
{
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    std::cout<<"The factoriel of "<<num<<" is: "<<fact(num);

    return 0;
}