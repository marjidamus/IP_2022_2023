#include <iostream>

int main()
{
    int num;
    int ones;
    int tens;
    int huns;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    ones=num%10;
    tens=num/10%10;
    huns=num/100;
    num=100*ones + 10* tens + huns;
    std::cout<<"Reversed number: "<<num;
    return 0;
}