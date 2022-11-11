#include <iostream>

const double pi=3.14;

int main()
{
    double rad;
    double area;
    double circuit;

    std::cout<<"Enter the radius: ";
    std::cin>>rad;

    area=2*pi*rad;
    circuit=pi*rad*rad;

    std::cout<<"Area: "<<area<<std::endl;
    std::cout<<"Circuit: "<<circuit<<std::endl;

    return 0;
}