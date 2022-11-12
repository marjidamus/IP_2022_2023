#include <iostream>

const int LIMIT=15;

int main()
{
    unsigned int spent;
    std::cout<<"Enter the spent money: ";
    std::cin>>spent;
    if(spent>15 || spent<0)
    {
        std::cout<<"Invalid input";
    }

    double remainder=LIMIT%spent;

    if(remainder<=15 && remainder>=10)
    {
        std::cout<<"Pizza";
    }
    else if(remainder<=9.99 && remainder>=5)
    {
        std::cout<<"Doner";
    }
    else if(remainder <=4.99 && remainder >=3)
    {
        std::cout<<"University cafeteria";
    }
    else
    {
        std::cout<<"Gladna mechka horo ne igrae";
    }
    return 0;
}