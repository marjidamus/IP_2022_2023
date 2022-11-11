#include <iostream>

int main()
{
    int year;
    std::cout<<"Enter the year: ";
    std::cin>>year;

    bool isLeap=(year%4==0 && year%100!=0) || year%400==0;
    std::cout<<"The year "<<(isLeap ? "is" : "isn't") <<" a leap year"; 
    return 0;
}