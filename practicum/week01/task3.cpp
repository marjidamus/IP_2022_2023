#include <iostream>

int main()
{
    double num1;
    double num2;
    double num3;
    double mid;
    std::cout<<"Enter three numbers: ";
    std::cin>>num1>>num2>>num3;

    mid=(num1+num2+num3)/3.0;

    std::cout<<"Average: "<<mid;

    return 0;
}