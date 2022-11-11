#include <iostream>

int main()
{
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    std::cout<<(num%2==0 ? "1" : "0");
    return 0;
}