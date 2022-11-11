#include <iostream>

int main()
{
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;

    int ones=num%10;
    int tens=num/10%10;
    int huns=num/100%10;
    int thous=num/1000;

    std::cout<<"The ones: "<<ones<<std::endl;
    std::cout<<"The tens: "<<tens<<std::endl;
    std::cout<<"The hundreds: "<<huns<<std::endl;
    std::cout<<"The thousands: "<<thous<<std::endl;
    
    return 0;
}